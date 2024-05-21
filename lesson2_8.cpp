#include "get_integer.h"
#include <iostream>


int main() {
	int x{ get_integer() };
	int y{ get_integer() };

	std::cout << x << " + " << y << " = " << x + y << '\n';

	return 0;
}