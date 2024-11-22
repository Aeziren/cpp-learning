#include <iostream>
#include <string>
#include <array>
#include <algorithm>


int main() {
	std::cout << "How many names would you like to enter? ";
	int qtt_names{};
	std::cin >> qtt_names;

	auto* names{ new std::string[qtt_names]{} };

	for (int i{ 0 }; i < qtt_names; ++i){
		std::cout << "Enter name #" << i + 1  << ": ";
		std::cin >> names[i];
	}

	std::sort(names, names + qtt_names);

	for (int i{ 0 }; i < qtt_names; ++i) {
		std::cout << "Name #" << i + 1 << ": ";
		std::cout << names[i] << '\n';
	}

	delete[] names;
}