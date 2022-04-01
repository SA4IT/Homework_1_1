#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

struct complex {
	double im;
	double re;

	complex complexSum(complex a);
};
complex complexInput();
void complexOutput(complex a);

complex complexRazn(complex a, complex b);
complex complexComposition(complex a, complex b);
complex complexDivision(complex a, complex b);
#endif