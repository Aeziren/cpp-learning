#include <iostream>
#include <utility>

int main() {
	int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	int last_sorted{ std::size(array) };

	while (true) {
		bool swapped{ false };
		--last_sorted;

		for (int i{ 0 }; i < last_sorted; ++i) {
			int j{ i + 1 };

			if (array[i] > array[j]) {
				std::swap(array[i], array[j]);
				swapped = true;
			}	
		}

		if (!swapped)
			break;
	}

	for (auto item : array) {
		std::cout << item << " ";
	}
	std::cout << '\n';
}