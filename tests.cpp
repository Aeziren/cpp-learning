#include <iostream>

int main() {
	int x{ 123 };
	int* xPtr{ &x };

	std::cout << xPtr << std::endl;

	std::cout << xPtr + 0x4;
}