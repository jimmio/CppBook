#include <iostream>

int main()
{
	/* Write a program that defines a variable of type `int` called
	`x` with automatic storage duration, and a variable of type
	`int*` which points to an object with dynamic storage duration.
	Both variables are in the same scope. */

	int x = 55;
	int* foo = new int{ 66 };

	std::cout << x << ' ' << *foo;
	delete foo;
}