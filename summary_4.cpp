#include <iostream>

double get_double();

int main() {
	double n1{ get_double() };
	double n2{ get_double() };

	char symbol{};
	std::cout << "(+, -, * or /): ";
	std::cin >> symbol;

	if (symbol == '+')
		std::cout << n1 << " + " << n2 << " = " << n1 + n2;
	else if (symbol == '-')
		std::cout << n1 << " - " << n2 << " = " << n1 - n2;
	else if (symbol == '*')
		std::cout << n1 << " * " << n2 << " = " << n1 * n2;
	else if (symbol == '/')
		std::cout << n1 << " / " << n2 << " = " << n1 / n2;
	else
		std::cout << "Invalid symbol!" << '\n';
	return 0;
}

double get_double() {
	double num{};
	std::cout << "Enter a number: ";
	std::cin >> num;

	return num;
}
