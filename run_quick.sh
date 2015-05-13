#! /bin/bash
# benchmarks are
#  blackscholes
#  bodytrack
#  facesim
#  ferret
#  freqmine
#  raytrace
#  swaptions
#  fluidanimate
#  vips
#  x264
#  canneal
#  dedup
#  streamcluster
for SCRIPT in facesim ferret #blackscholes bodytrack #facesim ferret freqmine raytrace swaptions fludianimate vips x264 canneal dedup streamcluster
do
	for SIZE in simdev simsmall simlarge
	do
		STRING=$SCRIPT.$SIZE
		time -p build/X86/gem5.fast \
		--stats-file=$STRING.stats \
		--dump-config=$STRING.config \
		configs/example/fs.py \
		--disk-image=parsec.img \
		--kernel=x86_64-vmlinux-2.6.22.9.smp \
		-r 1 \
		-n 4 \
		--ruby \
		--caches \
		--restore-with-cpu=timing \
		--cpu-type=timing \
		--num-l2caches=1 \
		--l1d_size=32kB \
		--l1i_size=32kB \
		--l2_size=1MB \
		--script=benchmark_scripts/$SCRIPT.$SIZE.rcS \
		--rel-max-tick=1000000000000 > m5out/$STRING.gem5out 2>&1
		cp m5out/system.pc.com_1.terminal m5out/$STRING.terminal
	done
done
#--script=configs/boot/hack_back_ckpt.rcS


