#include <iostream>

namespace Baz
{
	void qux();
}

void Baz::qux()
{
	std::cout << "We're in record";
}

int main()
{
	/* Write a program that declares a function inside a namespace
	and defines the function outside the namespace. Invoke the function
	in the main program. */

	Baz::qux();
}