#include <iostream>
#include <string>

int main()
{
	/* 
	* Write a program that accepts the first and last name from the standard input
	* using the `std::getline` function.
	* Store the input in a single string called `fullname`.
	* Print out the string.
	*/

	std::string fullname;
	std::cout << "Enter your first and last name:\n";
	std::getline(std::cin, fullname);
	std::cout << fullname;
}