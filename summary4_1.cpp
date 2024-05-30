#include <iostream>

double meters_fallen(int seconds);
void print_result(int seconds, double height);

int main() {
	double height{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;

	print_result(1, height);
	print_result(2, height);
	print_result(3, height);
	print_result(4, height);
	print_result(5, height);
}

// Calculate how much a object would fall after "seconds" seconds.
double meters_fallen(int seconds) {
	double gravity{ 9.8 };
	return gravity * (seconds * seconds) / 2.0;
}

void print_result(int seconds, double height) {
	if (height - meters_fallen(seconds) > 0)
		std::cout << "At " << seconds << " seconds, the ball is at heigth: " << height - meters_fallen(seconds) << " meters.\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}