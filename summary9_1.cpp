#include "Random.h"
#include <iostream>

int getGuess(int guessNumber, int minValue, int maxValue) {
	while (true) {
		std::cout << "Guess #" << guessNumber << ": ";
		int userNumber{};
		std::cin >> userNumber;

		if (userNumber >= minValue && userNumber <= maxValue) {
			return userNumber;
		}
		else {
			std::cout << "Invalid number!" << std::endl;
		}
	}
}

int main() {
	constexpr int maxTries{ 7 };
	constexpr int minValue{ 1 };
	constexpr int maxValue{ 100 };

	bool playing{ true };
	while (playing) {
		std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;

		int randomNumber{ Random::get(minValue, maxValue) };
		int chosenNumber{};
		bool wonGame{ false };
		for (int tries{ 1 }; tries <= maxTries; ++tries) {
			chosenNumber = getGuess(tries, minValue, maxValue);

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