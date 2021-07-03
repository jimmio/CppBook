#include <iostream>
#include <memory>

int main()
{
	/* Write a program that defines a unique pointer to an
	integer value. Use the `std::make_unique` fn to create
	a pointer. */

	std::unique_ptr<int> p = std::make_unique<int>(234);
	std::cout << *p;
}