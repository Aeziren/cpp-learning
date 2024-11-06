#include <iostream>

int main() {
	for (int i{ 1 }; i <= 1'000'000'000; ++i) {
		if (i % 100'000'000 == 0)
			std::cout << i << std::endl;
	}
}