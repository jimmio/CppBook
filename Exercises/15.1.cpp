#include <iostream>

int main()
{
	// Write a program that defines and initializes an array of five doubles.
	// Change and print the values of the first and last array elements.

	double double_arr[5] = { 10.10, 20.20, 30.30, 40.40, 50.50 };

	int double_arr_len = sizeof(double_arr) / sizeof(double_arr[0]);
	int last_index = double_arr_len - 1;

	double_arr[0] = 10.01;
	double_arr[last_index] = 50.05;

	for (int i = 0; i < double_arr_len; i++) {
		std::cout << double_arr[i] << '\n';
	}
}