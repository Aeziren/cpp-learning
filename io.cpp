#include "io.h"
#include <iostream>

int read_number() {
	int number{};
	std::cout << "Enter a integer: ";
	std::cin >> number;

	return number;
}


void write_answer(int answer) {
	std::cout << "Result: " << answer << '\n';
}