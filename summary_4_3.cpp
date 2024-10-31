#include <iostream>

double distance_fallen(int seconds);

int main() {
	std::cout << "Enter the height of the tower in meters: ";
	double tower_height{};
	std::cin >> tower_height;

	double ball_height{};
	for (int i = 0; i < 6; i++) {
		ball_height = tower_height - distance_fallen(i);

		if (ball_height > 0) {
			std::cout << "At " << i << " seconds, the ball is at height: " << ball_height << " meters" << std::endl;
		}
		else {
			std::cout << "At " << i << " seconds, the ball is on the ground.";
		}
	}

}

// Calculates how much a ball would drop at normal gravity given a tower height
double distance_fallen(int seconds) {
	return 9.8 * (seconds * seconds) / 2.0;
}

