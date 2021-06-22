#include <iostream>

int main() {
	int x = 0;
	int y = 0;
	std::cout << "Enter two integers separated by a space to display their sum: ";
	std::cin >> x >> y;
	int result = x + y;
	std::cout << result;
	return 0;
}