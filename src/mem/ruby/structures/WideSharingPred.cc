#include "mem/ruby/structures/WideSharingPred.hh"
#include "mem/ruby/system/System.hh"
#include "debug/RubySlicc.hh"

using namespace std;
typedef WideSharingPredParams Params;


//Main method - returns prediction
NetDest WideSharingPred::getPrediction(Address pc, MachineID local, int get_indicator) {
  NetDest prediction;

//pc.bitSelect(from,to) returns unsigned integer
const size_t pcIndex = pc.bitSelect(6,15);

/*
 int inGETS = 2;
 int inGETX = 2;
  */
  //gets called predictor
  if (get_indicator==1) {
	prediction = pred_table[pcIndex].owner;


   }//end if

  if (get_indicator==2) {
	prediction = pred_table[pcIndex].ownersharers;

   }//end if

  
  // add basic nodes
 prediction.add(local);
  	for (NodeID i = 0; i < MachineType_base_count(MachineType_L2Cache); i++) {
    		//MachineID mach = {MachineType_L2Cache, i}; 
    //		prediction.add(mach);
  	}//end for



  DPRINTF(RubySlicc, "L1 Prediction: %s\n", prediction);
  return prediction;


}//end getPrediction


void WideSharingPred::updateTable(Address pc, MachineID local, NetDest sharer) {


const size_t pcIndex = pc.bitSelect(6,15);
//this is the newowner netdest
NetDest newowner;
//newowner.add(local);

//Update owner entry with owner
			pred_table[pcIndex].owner = newowner;
			//Also, we update our owner sharer netdest to include owner and sharers
			pred_table[pcIndex].ownersharers = sharer;
			//pred_table[pcIndex].ownersharers.add(local);


}//end updateTable



WideSharingPred *
WideSharingPredParams::create()
{
    return new WideSharingPred(this);
}


//updating the prediction table on whatever the owner field is. 
/*
gem5.opt: build/X86/mem/ruby/common/Set.cc:274: bool Set::isSuperset(const Set&) const: Assertion `m_nSize == test.m_nSize' failed.
Program aborted at cycle 3120000
Abort (core dumped)

*/

/*
gem5.opt: build/X86/mem/ruby/common/NetDest.cc:41: void NetDest::add(MachineID): Assertion `bitIndex(newElement.num) < m_bits[vecIndex(newElement)].getSize()' failed.
Program aborted at cycle 1500

*/


/*
	//search through array looking for pc
	for (int i = 0; i < 8; i++) {
		//if PC found in any of the 1024 entries
 		if (pred_table[i].pc == pc) {
			//we set our prediction NetDest equal to that entries OWNER NetDest (since it is a GETS)
			prediction = pred_table[i].owner;
			//integer value indicates we've found the entry
			inGETS = 1;
		}//end if
	}//end for
*/

	//We must put that PC in our array if it mets the following two conditions
	//
	//#1)We haven't found the entry in our array - hence inTable==2
	//#2)If we run out of space in our array, we just replace the oldest entry
	//I'm using index 0's counter int to keep track of how many entries I've put in my array in total
	//I'm sure there is a better way to do this, but this is the way I'm doing it. 
	//Further, we must also set our predictor NetDest to include all nodes

/*	if ((inGETS == 2)) {
		//adding the PC into the the entry, at the index our counter indicates. By moding it by 1024, we always replace the oldest entry 	
		pred_table[pred_table[0].counter%8].pc = pc;
		//We could clear the Owner Field and Sharer field that the older entry had, but we will just do that in update after we get a Response
		//so there is no point in doing it here. 
		//updating the counter
		pred_table[0].counter = pred_table[0].counter + 1;
		}//end if
*/



  //This is almost identical code for when we have a GETX calling predictor


	/*//search through array looking for pc
	for (int i = 0; i < 8; i++) {
		//if PC found in any of the 1024 entries
 		if (pred_table[i].pc == pc) {
			//we set our prediction NetDest equal to that entries OWNER NetDest (since it is a GETS)
			prediction = pred_table[i].ownersharers;
			//integer value indicates we've found the entry
			inGETX = 1;
		}//end if
	}//end for
*/

	//We must put that PC in our array if it mets the following two conditions
	//
	//#1)We haven't found the entry in our array - hence inTable==2
	//#2)If we run out of space in our array, we just replace the oldest entry
	//I'm using index 0's counter int to keep track of how many entries I've put in my array in total
	//I'm sure there is a better way to do this, but this is the way I'm doing it. 
	//Further, we must also set our predictor NetDest to include all nodes
/*
	if ((inGETX == 2)) {
		//adding the PC into the the entry, at the index our counter indicates. By moding it by 1024, we always replace the oldest entry 	
		pred_table[pred_table[0].counter%8].pc = pc;
		//We could clear the Owner Field and Sharer field that the older entry had, but we will just do that in update after we get a Response
		//so there is no point in doing it here. 
		//updating the counter
		pred_table[0].counter = pred_table[0].counter + 1;
		}//end if
  
*/
 
/*  //if on a GETS or GETX, if the PC wasn't in the table, we have to add all other L1 nodes
  if((inGETX==2) && (inGETS)) {
  	for (NodeID i = 0; i < MachineType_base_count(MachineType_L1Cache); i++) {
		MachineID mach = {MachineType_L1Cache, i}; 
		prediction.add(mach);
	}//end for
  }//end if


//search through array looking for pc
	for (i = 0; i < 8; i++) {
		//if PC found in any of the 1024 entries
 		if (pred_table[i].pc == pc) {
//Update owner entry with owner
			pred_table[i].owner = newowner;
			//Also, we update our owner sharer netdest to include owner and sharers
			pred_table[i].ownersharers = sharer;
			pred_table[i].ownersharers.add(local);
			
		}//end if
	}//end for
*/
 

  


