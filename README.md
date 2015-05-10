# pf-cuda
Particle filtering using CUDA, a proof-of-concept.

This constructs a "true" synthetic data time series of an epidemic, from that generates a "noisy" data stream, then uses an SIS particle filter to try and reconstruct the true data from the noisy data.

Requires CUDA and cuRand header files, and (optionally) gnuplot to display output data.

To compile

    $ nvcc -arch=sm_20 -O2 pf_cuda.cu timer.cpp rand.cpp -o pf_cuda.x

To run normally, plotting using gnuplot

    $ ./pf_cuda.x

To run without plotting (output will still be written to file)

    $ ./pf_cuda.x -noplot
