#include <iostream>

int main() {
	char letter{};
	std::cout << "Enter a character: ";
	std::cin >> letter;

	int conversion{ letter };

	std::cout << "The ASCII code for '" << letter << "' is " << conversion << '\n';

	return 0;
}