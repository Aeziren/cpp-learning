#include <iostream>
#include <string>

enum class Animal{
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck,
};

std::string_view getAnimalName(Animal animal) {
	using enum Animal;

	switch (animal) {
		case pig: return "pig";
		case chicken: return "chicken";
		case goat: return "goat";
		case cat: return "cat";
		case dog: return "dog";
		case duck: return "duck";
		default: return "???";
	}
}

void printNumberOfLegs(Animal animal) {
	using enum Animal;

	int numberOfLegs{ 0 };

	switch (animal) {
		case chicken:
		case duck:
			numberOfLegs = 2;
			break;
		case pig: 
		case goat:
		case cat: 
		case dog:
			numberOfLegs = 4;
			break;
		default: numberOfLegs = 0;
			break;
	}

	std::cout << "A " << getAnimalName(animal) << " has " << numberOfLegs << " legs." << std::endl;
}

int main() {
	printNumberOfLegs(Animal::cat);
	printNumberOfLegs(Animal::chicken);

	return 0;
}