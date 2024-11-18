#include <iostream>
#include <vector>

int main() {
	std::cout << "Enter 3 integers: ";
	std::vector<int> integers(3);
	std::cin >> integers[0] >> integers[1] >> integers[2];

	std::cout << "The sum is: " << integers[0] + integers[1] + integers[2] << std::endl;
	std::cout << "The product is: " << integers[0] * integers[1] * integers[2];
}