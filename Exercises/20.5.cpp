#include <iostream>

int division(int x, int y) {
	return x / y;
}

double division(double x, double y) {
	return x / y;
}

int main()
{
	auto result_a = division(10, 2);
	auto result_b = division(10.1, 2.01);

	std::cout << result_a << '\n';
	std::cout << result_b << '\n';
}