#include <iostream>
#include <vector>
#include <cassert>

int main() {
	std::vector<int> divisors{3, 5, 7, 11, 13, 17, 19};
	std::vector<std::string_view> words{"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom"};

	assert(divisors.size() == words.size());

	// Used to track if a number was divided
	bool divided{ };
	for (int currentNumber{ 1 }; currentNumber <= 150; ++currentNumber) {
		divided = false;
		for (int index{ 0 }; index < divisors.size(); ++index) {
			if (currentNumber % divisors[index] == 0) {
				std::cout << words[index];
				divided = true;
			}
		}

		if (!divided)
			std::cout << currentNumber << std::endl;
		else
			std::cout << std::endl;
	}
}