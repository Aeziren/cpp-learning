#include <iostream>

int get_int() {
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	return x;
}// x dies

int main() {
	int smaller{get_int()};
	int larger{get_int()};

	if (smaller > larger) {
		int temp{larger};
		larger = smaller;
		smaller = temp;
	} // temp dies

	std::cout << "The smaller value is " << smaller << std::endl;
	std::cout << "The larger value is " << larger;

	return 0;
} // smaller and larger dies