#include <iostream>
#include <string>


class Ball {
private:
	std::string m_color{};
	double m_radius{};

public:
	Ball(std::string_view color, double radius)
		: m_radius{ radius }
		, m_color{ color } {
	}

	const std::string& getColor() const {
		return m_color;
	}

	double getRadius() const {
		return m_radius;
	}

	void print() {
		std::cout << "Ball(" << getColor() << ", " << getRadius() << ")\n";
	}
};

int main() {
	Ball blue { "blue", 10.0 };
	blue.print();

	Ball red { "red", 12.0 };
	red.print();

	return 0;
}