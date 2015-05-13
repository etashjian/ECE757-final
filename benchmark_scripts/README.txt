This is a readme for using the PARSEC benchmark.

The disk image, parsec.img, uses the precompiled binaries provided by the 
PARSEC sebsite. This was the easiest/quickest way to get it up and running.

How to run: in /home/Benchmarks/parsec-2.1/bin/
    ./parsecmgmt -a run -x pre
This will run all of the benchmarks in 'test' mode, which is just for 
verification and not for taking measurements.

To run with different size inputs, add ‘-i <size>’ to command line, where size 
is test, simdev, simsmall, simlarge, and native. For our simulation purposes we
are going to run simlarge.
    ./parsecmgmt -a run -x pre -i simsmall

To change the number of threads, add ‘-n <num>’ to command line, where num is 
number of threads
    ./parsecmgmt -a run -x pre -i simsmall -n 8

To run a specific benchmark, add ‘-p <name>’ to command line, where name is the 
name of the benchmark you want to run. Benchmarks are blackscholes, bodytrack, 
facesim, ferret, freqmine, raytrace, swaptions, fluidanimate, vips, x264, 
canneal, dedup, streamcluster.
    ./parsecmgmt -a run -x pre -i simsmall -n 8 -p ferret
From the PARSEC website:
    blackscholes - Option pricing with Black-Scholes Partial Differential 
        Equation (PDE)
    bodytrack - Body tracking of a person
    canneal - Simulated cache-aware annealing to optimize routing cost of a 
        chip design
    dedup - Next-generation compression with data deduplication
    facesim - Simulates the motions of a human face
    ferret - Content similarity search server
    fluidanimate - Fluid dynamics for animation purposes with Smoothed Particle 
        Hydrodynamics (SPH) method
    freqmine - Frequent itemset mining
    raytrace - Real-time raytracing
    streamcluster - Online clustering of an input stream
    swaptions - Pricing of a portfolio of swaptions
    vips - Image processing
    x264 - H.264 video encoding


General PARSEC info, also from website:
 PARSEC differs from other benchmark suites in the following ways:
    Multithreaded: While serial programs are abundant, they are of limited use 
        for evaluation of multiprocessor machines. PARSEC is one of few 
        benchmark suites that are parallel.
    Emerging Workloads: The suite includes emerging workloads which are likely 
        to become important applications in the near future but which are 
        currently not commonly used. Our goal was to provide a collection of 
        applications as might be typical in a few years.
    Diverse: PARSEC does not try to explore a single application domain in 
        detail, as was done by several previous benchmark suites. The selection 
        of included programs is wide and tries to be as representative as 
        possible.
    Not HPC-Focused: Computationally intensive, parallel programs are very 
        common in the domain of High-Performance Computing (HPC), but HPC 
        programs are just a small subset of the whole application space. In the 
        future, parallelization techniques will become increasingly popular in 
        other areas as well. The PARSEC suite anticipates this devlopment and 
        tries to avoid a program selection which is skewed towards HPC. It 
        focuses on programs from all domains, such as desktop and server 
        applications.
    Research: The suite is primarily intended for research. It can also be used 
        for performance measurements of real machines, but its original purpose 
        is insight, not numbers. Benchmark suites intended for research usually 
        go beyond pure scoring systems and provide infrastructure to instrument 
        and manipulate included programs in an efficient manner.

To set up the parsec disk image I first had to make a blank disk image, using 
the gem5 util gem5/util/gem5img.py. This requires sudo privileges, so I did 
this on my home virtual machine. Once the disk image was created I then mounted 
it and copied over everything from the default linux x86 disk image provided on 
the gem5 website. Then I copied the PARSEC benchmark onto the disk image. This 
was pretty involved, since I had to store the benchmark on the CAE computer 
because of space requirements.
At this point I tested the benchmark to make sure it would run in gem5. This 
involved no small amount of trial and error, especially once we started using 
the Ruby memory model, as well as our custom interconnect and multicast 
predictors. This was accomplished by consulting the gem5 mailing list archive.
