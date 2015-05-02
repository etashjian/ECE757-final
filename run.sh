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
SCRIPT=blackscholes
build/X86/gem5.fast \
configs/example/fs.py \
--disk-image=parsec.img \
--kernel=x86_64-vmlinux-2.6.22.9.smp \
-n 8 \
-r 1 \
--ruby \
--caches \
--restore-with-cpu=timing \
--cpu-type=timing \
--num-l2caches=1 \
--l1d_size=32k \
--l1i_size=32k \
--l2_size=1MB \
--script=benchmark_scripts/$SCRIPT.rcS
#--script=configs/boot/hack_back_ckpt.rcS

