#include <iostream>
#include "Random.h"
#include <vector>
#include <string>
#include <algorithm>

//TODO: Rewrite this entire code.

namespace Wordlist {
	std::vector<std::string_view> words{ "mystery", "broccoli", "account", "almost", "spaghetti", "opinion", "beautiful", "distance", "luggage" };
	//std::vector<std::string_view> words{ "almost" };

	std::string_view pick_word() {
		return words[Random::get<std::size_t>(0, words.size() - 1)];
	}
}

class Session {
private:
	int m_lives{ 6 };
	int m_right_guesses{ 0 };
	bool m_won_game{ false };
	std::string m_target_word{ Wordlist::pick_word() };
	std::vector<char> m_guessed_letters{};

	int letter_correct(char p_letter) {
		// returns how much times the guess was correct

		int correct_times{ 0 };
		for (char letter : m_target_word) {
			if (letter == p_letter)
				// letter found, correct
				++correct_times;
		}

		// letter not found, incorrect
		return correct_times;
	}

	// register the guess and decrement lives if it was a wrong guess
	bool register_guess(char guess) {
		for (char letter : m_guessed_letters) {
			if (guess == letter) {
				std::cout << "You already entered letter " << guess << ".\n";
				return false;				
			}

		}

		m_guessed_letters.push_back(guess);


		if (int correct_times{ letter_correct(guess) }) {
			m_right_guesses += correct_times;

			if (m_right_guesses == m_target_word.size())
				m_won_game = true;
		}	
		else
			--m_lives;

		return true;
	}

public:
	bool lives_remaining() const { return m_lives > 0; }
	bool won_game() const { return m_won_game; }
	std::string_view get_target_word() const { return m_target_word; }

	// shows the word and lives remaining
	void display() const {
		for (char letter_target : m_target_word) {
			bool correct{ false };

			for (char letter_guess : m_guessed_letters) {
				if (letter_guess == letter_target) {
					std::cout << letter_guess;
					correct = true;
				}
			}

			if (!correct)
				std::cout << '_';
		}

		std::cout << "\tlives: " << m_lives;

		std::cout << '\n';
	}

	void get_guess() {
		while (true) {
			std::cout << "Enter your next letter: ";
			char chosen_letter{};
			std::cin >> chosen_letter;

			// Error protection
			if (!std::cin) {
				std::cin.clear();
				continue;
			}
			if (chosen_letter < 'a' || chosen_letter > 'z') {
				continue;
			}

			if (register_guess(chosen_letter))
				break;			
		}
	}
};

int main() {
	std::cout << "Welcome to Hangman in C++\n";

	Session session{};

	while (true) {
		session.display();
		session.get_guess();

		if (session.won_game()) {
			std::cout << "You won the game!\n";
			break;
		}
		else if (!session.lives_remaining()) {
			std::cout << "You loose. The word was: " << session.get_target_word();
			break;
		}
	}
		
	return 0;
}