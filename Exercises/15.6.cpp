#include <iostream>
#include <string>

int main()
{
	/* Write a program that creates two substrings from the main string.
	* The main string is made up of first and last names and is equal to "John Doe".
	* The first substring is the first name. The second substring is the last name.
	* Print the main string and two substrings after it.
	*/

	std::string fullname = "John Doe";
	std::string first = fullname.substr(0, 4);
	std::string last = fullname.substr(5, 3);

	std::cout << "Full name: " << fullname << '\n';
	std::cout << "First: " << first << '\n';
	std::cout << "Last: " << last << '\n';
}