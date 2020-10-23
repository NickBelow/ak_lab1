#include "calculator.h"

// This is calculator

//This is ADD func
int Calculator::Add (double a, double b)
{
	return a + b;
}

//This is SUB func
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//This is MUL func
int Calculator::Mul (double a, double b)
{
    return a * b;
}

int Calculator::Div (double a, double b)
{
    return a * b;
}
