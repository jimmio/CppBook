#include <iostream>
#include <string>

int main()
{
	/* Write a program that defines the main string with a value of "Hello C++ World."
	and checks if a single character 'C' is found in the main string.
	*/

	std::string main = "Hello C++ World.";
	auto char_found = main.find('C');
	if (char_found != std::string::npos) {
		std::cout << "'C' was found.";
	}
}