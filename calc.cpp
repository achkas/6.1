#include "calc.h"


 double add (double a, double b) {
	return ( a + b);
}

 double sub(double a, double b) {
	return (a - b);
}

 double mul(double a, double b) {
	return (a * b);
}

double division(double a, double b) {
	return (a / b);
}

double exp(double a, double b) {

    double nsave = a;
    for (int i = 1; i < b; i++)
    {
        a = (nsave*a);        
    }
    return a;
} 
