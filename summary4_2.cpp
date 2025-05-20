#include <iostream>


double getDouble() {
	std::cout << "Enter a double: ";

	double x{};
	std::cin >> x;

	return x;
}

int main() {
	double x{ getDouble() };
	double y{ getDouble() };

	std::cout << "Enter +, -, *, or /: ";
	char symbol{};
	std::cin >> symbol;

	double result{};

	switch (symbol) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	}

	std::cout << "Result is: " << result;

	return 0;
}