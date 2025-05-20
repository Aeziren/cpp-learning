#include "Random.h"
#include <iostream>

int main() {
	constexpr int maxTries{ 7 };

	bool playing{ true };
	while (playing) {
		std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;

		int randomNumber{ Random::get(1, 100) };
		int chosenNumber{};
		bool wonGame{ false };
		for (int tries{ 1 }; tries <= maxTries; ++tries) {
			std::cout << "Guess #" << tries << ": ";
			std::cin >> chosenNumber;

			if (chosenNumber == randomNumber) {
				std::cout << "You guessed right! It was " << randomNumber << std::endl;
				wonGame = true;
				break;
			}
			else if (chosenNumber < randomNumber)
				std::cout << "Too low!" << std::endl;
			else if (chosenNumber > randomNumber)
				std::cout << "Too high!" << std::endl;
		}
		if (!wonGame)
			std::cout << "You lose! The correct number was: " << randomNumber << std::endl;


		std::cout << "Would you like to play again (y/n)? ";
		char choice{};
		std::cin >> choice;

		playing = choice == 'y' || choice == 'Y' ? true : false;
	}

	return 0;
}