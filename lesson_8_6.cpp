#include <iostream>

int get_int() {
	std::cout << "Enter a integer: ";
	int x{};
	std::cin >> x;

	return x;
}

int main() {
	int x{ get_int() };
	int y{ get_int() };

	std::cout << "Enter the operator: ";
	char operation{};
	std::cin >> operation;
	

	switch (operation) {
	case '+':
		std::cout << x + y;
		break;
	case '-':
		std::cout << x - y;
		break;
	case '*':
		std::cout << x * y;
		break;
	case '/':
		std::cout << x / y;
		break;
	case '%':
		std::cout << x % y;
		break;
	default:
		std::cout << "Invalid operation!";
		break;
	}
}