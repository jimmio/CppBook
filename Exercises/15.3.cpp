#include <iostream>

int main()
{
	// Write a program that defines an object of type double called `mydouble`.
	// Define an object of reference type called `myreference` and initialize it with `mydouble`.
	// Change the value of `myreference`.
	// Print the object value using both the reference and the original variable.
	// Change the value of `mydouble`.
	// Print the value of both objects.

	double mydouble = 10.01;
	double& myreference = mydouble;
	myreference = 10.02;

	std::cout << mydouble << '\n';
	std::cout << myreference << '\n';

	mydouble = 10.03;

	std::cout << mydouble << '\n';
	std::cout << myreference << '\n';
}