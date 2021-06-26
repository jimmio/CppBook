#include <iostream>

int multiplication(int x, int y) {
	return x * y;
}

int main()
{
	int result = multiplication(10, 3);
	std::cout << result;
}