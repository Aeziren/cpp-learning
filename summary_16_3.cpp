#include <iostream>
#include <vector>
#include <utility>


template <typename T>
std::pair<int, int> get_index_min_max(std::vector<T>& elements) {
	int index_min{ 0 };
	int index_max{ 0 };

	for (int index{}; index < elements.size(); ++index) {
		if (elements[index] < elements[index_min])
			index_min = index;
			
		if (elements[index] > elements[index_max]) {
			index_max = index;
		}
	}

	return {index_min, index_max};
}

template <typename T>
void print_array(std::vector<T> elements) {
	std::cout << "[";
	for (int index{ 0 }; index < elements.size(); ++index) {
		std::cout << elements[index];
		if (index < elements.size() - 1)
			std::cout << ", ";
	}

	std::cout << "]\n";
}

std::vector<int> get_vector() {
	std::vector<int> user_inputs{};
	int input{};

	std::cout << "Enter numbers to add (use -1 to stop): ";
	while (true) {
		std::cin >> input;
		if (input == -1)
			break;

		user_inputs.push_back(input);
	}

	return user_inputs;
}

template <typename T>
void print_min_max(std::vector<T>& elements) {
	if (elements.size() == 0)
		return;

	std::pair<int, int> min_max{ get_index_min_max(elements) };

	std::cout << "With array ";
	print_array(elements);

	std::cout << "The min element has index " << min_max.first << " and value " << elements[min_max.first] << std::endl;
	std::cout << "The max element has index " << min_max.second << " and value " << elements[min_max.second] << std::endl;

}

int main() {
	std::vector v1{ 3, 8, 2, 5, 7, 8, 3 };
	print_min_max(v1);

	std::vector v2{ get_vector() };
	print_min_max(v2);	
}