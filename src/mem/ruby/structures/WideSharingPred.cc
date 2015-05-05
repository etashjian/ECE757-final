#include "mem/ruby/structures/WideSharingPred.hh"
#include "mem/ruby/system/System.hh"
#include "debug/RubySlicc.hh"

using namespace std;
typedef WideSharingPredParams Params;


//Main method - returns prediction
NetDest WideSharingPred::getPrediction(Address pc, MachineID local, int get_indicator) {
  NetDest prediction;
  
  //gets called predictor
  if (get_indicator==1) {

  int inTable = 2;

	//search through array looking for pc
	for (int i = 0; i < 1024; i++) {
		//if PC found in any of the 1024 entries
 		if (PredTableEntry[i].pc == pc) {
			//we set our prediction NetDest equal to that entries OWNER NetDest (since it is a GETS)
			prediction = PredTableEntry[i].owner;
			//integer value indicates we've found the entry
			int inTable = 1;
		}//end if
	}//end for


	//We must put that PC in our array if it mets the following two conditions
	//
	//#1)We haven't found the entry in our array - hence inTable==2
	//#2)If we run out of space in our array, we just replace the oldest entry
	//I'm using index 0's counter int to keep track of how many entries I've put in my array in total
	//I'm sure there is a better way to do this, but this is the way I'm doing it. 
	//Further, we must also set our predictor NetDest to include all nodes

	if ((int inTable == 2)) {
		//adding the PC into the the entry, at the index our counter indicates. By moding it by 1024, we always replace the oldest entry 	
		PredTableEntry[PredTableEntry[0].counter%1024].pc = pc;
		//We could clear the Owner Field and Sharer field that the older entry had, but we will just do that in update after we get a Response
		//so there is no point in doing it here. 
		//updating the counter
		PredTableEntry[0].counter = PredTableEntry[0].counter++;
		}//end if
   }//end if


  //This is almost identical code for when we have a GETX calling predictor
  if (get_indicator==2) {

  int inTable = 2;

	//search through array looking for pc
	for (int i = 0; i < 1024; i++) {
		//if PC found in any of the 1024 entries
 		if (PredTableEntry[i].pc == pc) {
			//we set our prediction NetDest equal to that entries OWNER NetDest (since it is a GETS)
			prediction = PredTableEntry[i].ownersharers;
			//integer value indicates we've found the entry
			int inTable = 1;
		}//end if
	}//end for


	//We must put that PC in our array if it mets the following two conditions
	//
	//#1)We haven't found the entry in our array - hence inTable==2
	//#2)If we run out of space in our array, we just replace the oldest entry
	//I'm using index 0's counter int to keep track of how many entries I've put in my array in total
	//I'm sure there is a better way to do this, but this is the way I'm doing it. 
	//Further, we must also set our predictor NetDest to include all nodes

	if ((int inTable == 2)) {
		//adding the PC into the the entry, at the index our counter indicates. By moding it by 1024, we always replace the oldest entry 	
		PredTableEntry[PredTableEntry[0].counter%1024].pc = pc;
		//We could clear the Owner Field and Sharer field that the older entry had, but we will just do that in update after we get a Response
		//so there is no point in doing it here. 
		//updating the counter
		PredTableEntry[0].counter = PredTableEntry[0].counter++;
		}//end if
  
   }//end if



  
  // add basic nodes
  prediction.add(local);
  	for (NodeID i = 0; i < MachineType_base_count(MachineType_L2Cache); i++) {
    		MachineID mach = {MachineType_L2Cache, i}; 
    		prediction.add(mach);
  	}//end for

 
  //if on a GETS or GETX, if the PC wasn't in the table, we have to add all other L1 nodes
  if(inTable==2){
  	for (NodeID i = 0; i < MachineType_base_count(MachineType_L1Cache); i++) {
		MachineID mach = {MachineType_L1Cache, i}; 
		pridiction.add(mach);
	}//end for
  }//end if
 

  

  DPRINTF(RubySlicc, "L1 Prediction: %s\n", prediction);
  return prediction;


}//end getPrediction

//FUNCTION FOR HANDLING UPDATES GOES HERE(AND DEFINITION IN .HH FILE)

void WideSharingPred::updateTable(Address pc, MachineID local, NetDest sharer) {

//this is the newowner netdest
NetDest newowner;
newonwer.add(local)

//search through array looking for pc
	for (int i = 0; i < 1024; i++) {
		//if PC found in any of the 1024 entries
 		if (PredTableEntry[i].pc == pc) {
			//Update owner entry with owner
			PredTableEntry[i].owner = newowner;
			//Also, we update our owner sharer netdest to include owner and sharers
			PredTableEntry[i].ownersharer = sharer;
			PredTableEntry[i].ownersharer.add(local);
		}//end if
	}//end for

}//end updateTable


WideSharingPred *
WideSharingPredParams::create()
{
    return new WideSharingPred(this);
}





//TODO:


//Create Presentation Slides - 2 tops. 
	//#1 explain method - indexing off PC(why different?), GETX, GETS slightly different, update policy
	//#2 show/talk/compare results?
