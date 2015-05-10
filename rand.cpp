/*	Author: Dexter Barrows
	Github: dbarrows.github.io
	*/

#include "rand.h"

/*	Return a random number in [0 1]
	*/
float randu() {
	return (float) rand() / (float) RAND_MAX;
}


/*	Return a normally distributed random number with mean 0 and standard deviation 1
	Uses the polar form of the Box-Muller transformation
	From http://www.design.caltech.edu/erik/Misc/Gaussian.html
	*/
float randn() {
	float x1, x2, w, y1;

	do {
		x1 = 2.0 * randu() - 1.0;
		x2 = 2.0 * randu() - 1.0;
		w = x1 * x1 + x2 * x2;
	} while ( w >= 1.0 );

	w = sqrt( (-2.0 * log( w ) ) / w );
	y1 = x1 * w;

	return y1;
}