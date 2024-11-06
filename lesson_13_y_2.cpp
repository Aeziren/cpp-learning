#include <iostream>
#include <string>

int main()
{
	std::string str{ "I saw a red car yesterday." };

	std::size_t color_pos = str.find("red");
	str.replace(color_pos, 3, "blue");

	std::cout << str << '\n'; // I saw a blue car yesterday.

	return 0;
}