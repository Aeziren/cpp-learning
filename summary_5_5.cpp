#include <iostream>
#include <string>
#include <string_view>


std::string ask_name(int person_number) {
	std::cout << "Enter the name of person #" << person_number << ": ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	return name;
}

int ask_age(std::string_view person_name_sv) {
	std::cout << "Enter the age of " << person_name_sv << ": ";
	int age{};
	std::cin >> age;

	return age;
}

int main() {
	const std::string name_person_1{ ask_name(1) };
	const int age_person_1{ ask_age(name_person_1) };

	const std::string name_person_2{ ask_name(2) };
	const int age_person_2{ ask_age(name_person_2) };

	if (age_person_1 > age_person_2) {
		std::cout << name_person_1 << " (age " << age_person_1 << ") is older than " << name_person_2 << " (age " << age_person_2 << ")";
	}
	else if (age_person_2 > age_person_1) {
		std::cout << name_person_2 << " (age " << age_person_2 << ") is older than " << name_person_1 << " (age " << age_person_1 << ")";
	}
	else {
		std::cout << "The ages are the same.";
	}
}