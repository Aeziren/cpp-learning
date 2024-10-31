#include <iostream>
#include <string>

constexpr bool isEven(int number) {
	return (number % 2) == 0;
}

int main() {
	std::cout << "Enter a integer: ";
	int number{};
	std::cin >> number;

	const std::string evenOrOdd = isEven(number) ? "even" : "odd";

	std::cout << number << " is " << evenOrOdd;
}