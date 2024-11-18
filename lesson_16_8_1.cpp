#include <iostream>
#include <vector>
#include <string>

template <typename T>
bool isValueInArray(const std::vector<T>& values, T target) {
	for (const auto& value : values) {
		if (value == target)
			return true;
	}

	// case don't found
	return false;
}

int main() {
	const std::vector<std::string_view> names{ "Alex", "Betty", "Caroline", "Emily", "Fred", "Greg", "Holly" };

	std::cout << "Enter a name: ";
	std::string user_name {};
	std::cin >> user_name;

	if (isValueInArray<std::string_view>(names, user_name)) {
		std::cout << user_name << " was found.";
	}
	else {
		std::cout << user_name << " was not found.";
	}

	return 0;
}