#ifndef Simpson_h
#define Simpson_h

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>

using namespace std;
double simpson(double a, double b, int n , int exponent, float constant);
double fk(double x,int exponent);


double simpson(double a, double b, int n , int exponent, float constant)
{

	double c= (a+b)/2.0;
	double h3= abs(b-a)/6.0;
	double result= h3*(constant*fk(a,exponent)+4.0*constant*fk(c,exponent)+constant*fk(b,exponent));
	return result;
}
double fk(double x,int exponent)
{
return  pow  (x, exponent);
}

#endif
