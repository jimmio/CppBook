#include <iostream>

void custommessage(const std::string& msg) {
	std::cout << msg;
}

int main()
{
	std::string foomsg = "barbaz";
	custommessage(foomsg);
}