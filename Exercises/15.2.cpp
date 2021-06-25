#include <iostream>

int main()
{
	// Write a program that defines an object of type double.
	// Define a pointer that points to that object.
	// Print the value of the pointed-to object by dereferencing the pointer.

	double d = 10.01;
	double* dp = &d;
	std::cout << *dp;
}