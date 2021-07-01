#include <iostream>

int main()
{
	/* Write a program which defines a variable of type `int*`
	which points to an object with dynamic storage duration
	(placed on the heap) */

	int* foo = new int{ 100 };
	std::cout << *foo;
	delete foo;
}