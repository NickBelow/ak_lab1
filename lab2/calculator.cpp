#include "calculator.h"

int Calculator::Add (double a, double b)
{	
	a = a + 0.5;
	b = b + a;
	return 0.5 * a + b - 0.5;
}

int Calculator::Sub (double a, double b)
{
	return a - b;
}

int Calculator::Mul (double a, double b)
{
	return a * b;
}