#! /bin/bash

build/X86/gem5.fast \
configs/example/fs.py \
--disk-image=parsec.img \
--kernel=x86_64-vmlinux-2.6.22.9.smp \
-n 8 \
--script=configs/boot/hack_back_ckpt.rcS

