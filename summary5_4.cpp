#include <iostream>
#include <string>

std::string getName(int personNumber);
int getAge(std::string_view personName);

int main() {
	const std::string person1{ getName(1) };
	const int agePerson1{ getAge(person1) };

	const std::string person2{ getName(2) };
	const int agePerson2{ getAge(person2) };

	if (agePerson1 > agePerson2) {
		std::cout << person1 << " (age " << agePerson1 << ") is older than " << person2 << " age (" << agePerson2 << ").\n";
	}
	else if (agePerson2 > agePerson1) {
		std::cout << person2 << " (age " << agePerson2 << ") is older than " <<person1 << " age (" << agePerson1 << ").\n";
	}
	else {
		std::cout << "They have the same age.";
	}

	return 0;
}

std::string getName(int personNumber) {
	std::cout << "Enter the name of person # " << personNumber << ':' << std::endl;
	std::string person{};
	std::getline(std::cin >> std::ws, person);

	return person;
}

int getAge(std::string_view personName) {
	std::cout << "Enter the age of " << personName << ':' << std::endl;
	int age{};
	std::cin >> age;

	return age;
}