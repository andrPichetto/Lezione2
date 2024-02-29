/** \file mathf.h
	\brief Library of functions for computing integrals
	\author Andrea Pichetto

	Details.
*/

#ifndef _MATHFH_
#define _MATHFH_

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

float Polynomial(float* coeff, int size, float in);
void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);
float Trapezoidal(float* values, int size, float stepsize);

#endif
