#include "Complex1_1.h"
using namespace std;
complex complexInput() {
	cout << "¬ведите действительную и мнимую часть комплексного числа!" << endl;
	double real;
	double imagine;
	cin >> real >> imagine;
	complex result;
	result.im = imagine;
	result.re = real;
	return result;
}
void complexOutput(complex a) {
	if (a.im > 0) {
		cout << a.re << " + " << abs(a.im) << "i" << endl;
	}
	if (a.im < 0) {
		cout << a.re << " - " << abs(a.im) << "i" << endl;
	}
	if (a.im == 0) {
		cout << a.re << endl;
	}
}
complex complex::complexSum(complex a) {
	double sumRe = a.re + this->re;
	double sumIm = a.im + this->im;
	complex summa;
	summa.re = sumRe;
	summa.im = sumIm;
	return summa;
}
complex complexRazn(complex a, complex b) {
	double sumRe = a.re - b.re;
	double sumIm = a.im - b.im;
	complex summa;
	summa.re = abs(sumRe);
	summa.im = abs(sumIm);
	return summa;
}
complex complexComposition(complex a, complex b) {
	double firstPart = (a.re * b.re - a.im * b.im);
	double secondPart = (a.im * b.re + a.re * b.im);
	complex composition;
	composition.re = firstPart;
	composition.im = secondPart;
	return composition;
}
complex complexDivision(complex a, complex b) {
	double firstPart = (a.re * b.re + a.im * b.im) / (pow(b.re, 2) + pow(a.im, 2));
	double secondPart = (a.im * b.re - a.re * b.im) / (pow(b.re, 2) + pow(b.im, 2));
	complex division;
	division.re = firstPart;
	division.im = secondPart;
	return division;
}