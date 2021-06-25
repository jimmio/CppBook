#include <iostream>
#include <string>

int main()
{
	// Write a program that defines two strings.
	// Join them together and assign the result to a third string.
	// Print out the value of the resulting string.

	std::string first = "foo";
	std::string second = "bar";
	std::string third = first.append(second);
	// or
	// std::string third = first + second;
	std::cout << third;
}