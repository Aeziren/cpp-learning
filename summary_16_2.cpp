#include <iostream>
#include <string>
#include <vector>
#include <cassert>


namespace Bag {
	enum Items {
		health_potions,
		torches,
		arrows,
		max_items,
	};
}

std::string_view item_to_string_singular(int id) {
	switch (id) {
	case Bag::health_potions:	return "health potion";
	case Bag::torches:			return "torch";
	case Bag::arrows:			return "arrow";
	default:					return "???";
	}
}

std::string_view item_to_string_plural(int id) {
	switch (id) {
	case Bag::health_potions:	return "health potions";
	case Bag::torches:			return "torches";
	case Bag::arrows:			return "arrows";
	default:					return "???";
	}	
}

int count_total_items(std::vector<int>& inventory) {
	int total{};

	for (int item_count : inventory)
		total += item_count;

	return total;
}

void print_inventory( std::vector<int>& inventory) {
	int index{ 0 };
	for (int item_count : inventory) {
		std::cout << "You have " << item_count << " ";
		std::cout << (item_count == 1 ? item_to_string_singular(index) : item_to_string_plural(index)) << std::endl;
		index += 1;
	}

	std::cout << "You have " << count_total_items(inventory) << " total items.";
}


int main() {
	std::vector inventory{ 1, 5, 10 };
	assert(inventory.size() == Bag::max_items);

	print_inventory(inventory);	
}