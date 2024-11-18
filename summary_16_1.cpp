#include <vector>
#include <string>


int main() {
	std::vector evens{ 2, 4, 6, 8, 10, 12 };
	const std::vector doubles{ 1.2, 3.4, 5.6, 7.8 };
	const std::vector<std::string_view> names{ "Alex", "Brad", "Charles", "Dave" };
	std::vector single_number{ 12 };
	std::vector<int> twelve_numbers(12);
}