#include <iostream>
#include <vector>


int main() {
	std::vector<char> word{ 'h', 'e', 'l', 'l', 'o' };
	std::cout << "The array has " << word.size() << " elements.\n";
	std::cout << word[1] << word.at(1);
}