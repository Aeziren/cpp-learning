#include <iostream>

int main() {
	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;

	std::cout << "Enter a double value: ";
	double y{};
	std::cin >> y;

	std::cout << "Enter +, -, * or /: ";
	char operation{};
	std::cin >> operation;

	if (operation == '+') {
		std::cout << x + y;
	}
	else if (operation == '-') {
		std::cout << x - y;
	}
	else if (operation == '*') {
		std::cout << x * y;
	}
	else if (operation == '/') {
		std::cout << x / y;
	}
	else {
		std::cout << "NOP";
	}

	return 0;
}