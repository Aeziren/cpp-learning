#include <iostream>

int main() {
	// The following lines ask user for a number and show it on screen. (By the way, this is the correct way of commenting code. It sounds newbie but explains well.)
	std::cout << "Enter a number: ";

	int number{};
	std::cin >> number;

	std::cout << "You entered the number: " << number << '\n';
}