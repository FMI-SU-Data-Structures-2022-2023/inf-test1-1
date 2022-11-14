#include "solution.h"

#include <cassert>
#include <cmath>
#include <stdexcept>
#include <stack>

#include <iostream>

/// Performs an operation on two arguments
///
/// @param operation
///    The code of the operation as a character. Can be +, -, *, / or ^
///
/// @param left
///    First argument of the operation 
///
/// @param right
///    Second argument of the operation
///
/// @exception std::invalid_argument
///    If an invalid operation is passed to the function or
///    if the operation is division (/) and the right argument is 0.
///
double perform(char operation, double left, double right)
{
	switch(operation) {
		case '+': return left + right;
		case '-': return left - right;
		case '*': return left * right;
		case '^': return std::pow(left, right);
		case '/':
			if(right == 0)
				throw std::invalid_argument("Division by zero");
			return left / right;
		
		default:
			throw std::invalid_argument("Invalid operation symbol passed to perform()");
	}
}

bool verify(const char* expression)
{
	//TODO Complete this function

	return false;
}

double evaluate(const char* expression)
{
	//TODO Complete this function

	return 0;
}
