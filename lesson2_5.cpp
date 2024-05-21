#include <iostream>

int double_number(int x) {
	return x * 2;
}

int main() {
	std::cout << "Enter a number: ";
	int num{};
	std::cin >> num;

	// Write on the screen
	std::cout << double_number(num);

	return 0;
}