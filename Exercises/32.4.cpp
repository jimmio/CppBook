#include <iostream>

namespace A
{
	namespace B
	{
		void fred();
	}
}

void A::B::fred()
{
	std::cout << "Zomby woof" << '\n';
}

int main()
{
	/* Write a program that defines a namespace called `A`, and
	another namespace called `B`, nested inside of `A`. Declare a
	function inside namespace `B` and define the function outside
	of both namespaces. Invoke the function in the main program.
	Then, introduce the entire namespace `B` to the current scope
	and invoke the function. */

	A::B::fred();

	using namespace A::B;

	fred();
}