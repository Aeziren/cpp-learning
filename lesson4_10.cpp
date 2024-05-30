#include <iostream>

bool is_prime(int num);

int main() {
	int num{};
	std::cout << "Enter a number (0-9): ";
	std::cin >> num;

	if (is_prime(num))
		std::cout << "Prime";
	else
		std::cout << "Not Prime";

	return 0;
}

bool is_prime(int num) {
	return num == 2 || num == 3 || num == 5 || num == 7;
}