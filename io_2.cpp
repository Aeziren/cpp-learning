#include <iostream>
#include "io_2.h"

int read_number() {
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;

	return x;
}

void write_answer(int answer) {
	std::cout << answer;
}