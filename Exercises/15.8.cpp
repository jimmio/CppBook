#include <iostream>
#include <string>

int main()
{
	/* Write a program that defines the main string with a value of "Hello C++ World."
	   and checks if a substring "C++" is found in the main string. */

	std::string mainstring = "Hello C++ World.";
	std::string::size_type substr_result = mainstring.find("C++");
	if (substr_result != std::string::npos)
	{
		std::cout << "The substring was found.";
	}
}