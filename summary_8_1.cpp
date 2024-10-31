#include <iostream>

// Gets tower height from user and returns it
inline double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

namespace ballHeight 
{
	// Returns the current ball height after "seconds" seconds
	double calculate(double towerHeight, int seconds)
	{
		constexpr double gravity{ 9.8 };

		// Using formula: s = (u * t) + (a * t^2) / 2
		// here u (initial velocity) = 0, so (u * t) = 0
		const double fallDistance{ gravity * (seconds * seconds) / 2.0 };
		const double ballHeight{ towerHeight - fallDistance };

		// If the ball would be under the ground, place it on the ground
		if (ballHeight < 0.0)
			return 0.0;

		return ballHeight;
	}

	// Prints ball height above ground
	inline void print(double actualBallHeight, int seconds)
	{
		if (actualBallHeight > 0.0)
			std::cout << "At " << seconds << " seconds, the ball is at height: " << actualBallHeight << " meters\n";
		else
			std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
	}
}

int main()
{
	const double towerHeight{ getTowerHeight() };

	int secondsElapsed{0};
	while (true) 
	{
		double ballDistanceGround{ ballHeight::calculate(towerHeight, secondsElapsed) };
		ballHeight::print(ballDistanceGround, secondsElapsed);

		if (ballDistanceGround <= 0)
			return 0;
		else
			++secondsElapsed;
	}	
}