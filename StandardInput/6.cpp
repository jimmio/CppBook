#include <iostream>

int main()
{
	int x = 9;
	int y = 2;

	int result_int = x / y;
	double result_double = x / y;

	std::cout << "result_int: " << result_int << '\n';
	std::cout << "result_double: " << result_double << '\n';

	double z = 2;

	int result_int_2 = x / z;
	double result_double_2 = x / z;

	std::cout << "result_int_2: " << result_int_2 << '\n';
	std::cout << "result_double_2: " << result_double_2 << '\n';
}