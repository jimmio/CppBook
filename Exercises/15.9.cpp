#include <iostream>
#include <string>

int main()
{
	/* Write a program that automatically deduces the type for `char`,
	   `int`, and `double` objects based on the initializer used.
	   Print out the values afterward. */

	auto c = '?';
	auto i = 1;
	auto d = 1.01;

	std::cout << c << '\n' << i << '\n' << d;
}