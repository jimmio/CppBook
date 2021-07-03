#include <iostream>

int main()
{
	/* Write a program that uses a `static_cast` function to
	convert between fundamental types. */

	char foo = 'f';
	int bar = static_cast<int>(foo);
	std::cout << bar;
}