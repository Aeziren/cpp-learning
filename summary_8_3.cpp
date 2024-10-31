#include <iostream>
#include "Random.h"

void play_hi_lo(int min_value, int max_value, int tries) {
	// Get the target number
	const int right_number = Random::get(min_value, max_value);

	for (int turn{ 1 }; turn <= tries; ++turn) {
		int number_chosen{get_guessed_number(turn, min_value, max_value)};

		if (number_chosen < right_number)
			std::cout << "Your guess is too low." << std::endl;
		else if (number_chosen > right_number)
			std::cout << "Your guess is too high." << std::endl;
		else {
			std::cout << "Correct! You win!" << std::endl;
			return;
		}
	}

	std::cout << "Sorry, you lose. The correct number was " << right_number << std::endl;
}

int get_guessed_number(int turn, int min_bound, int max_bound) {
	while(true) {
		std::cout << "Guess #" << turn << ": ";
		int number_chosen{};
		std::cin >> number_chosen;

		bool successful_extraction{ std::cin };
		std::cin.clear();

		if (!successful_extraction || number_chosen < min_bound || number_chosen > max_bound)
			continue;

		return number_chosen;
	}



}

bool get_play_again_choice() {
	char player_choice{};
	while (true) {
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> player_choice;

		if (player_choice == 'y')
			return true;
		else if (player_choice == 'n')
			return false;
		else
			std::cout << "Wrong input." << std::endl;
	}
}

int main() {
	// Play game
	do {
		std::cout << "Let's play Hi-Lo" << std::endl;
		std::cout << "Minimun value: ";
		int min_value{};
		std::cin >> min_value;

		std::cout << "Maximum value: ";
		int max_value{};
		std::cin >> max_value;

		std::cout << "Tries: ";
		int tries{};
		std::cin >> tries;

		play_hi_lo(min_value, max_value, tries);
		
	} while (get_play_again_choice());
}