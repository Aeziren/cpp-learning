#include <iostream>

double distanceFallen(int seconds) {
	const double gravityConstant{ 9.8 };
	return static_cast<double>(gravityConstant * (seconds * seconds) / 2);
}

int main() {
	std::cout << "Enter the height of the tower: ";
	double towerHeight{};
	std::cin >> towerHeight;

	int seconds{0};
	double ballHeight{ towerHeight };
	while (true) {
		ballHeight = towerHeight - distanceFallen(seconds);
		if (ballHeight > 0)
			std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters." << std::endl;
		else {
			std::cout << "At " << seconds << " seconds, the ball is on the ground.";
			break;
		}
			
		++seconds;
	}
}
