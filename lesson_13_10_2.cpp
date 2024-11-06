#include <iostream>


struct Fraction {
	int numerator{};
	int denominator{ 1 };
};

Fraction get_fraction() {
	Fraction temp{};

	std::cout << "Enter the numerator: ";
	std::cin >> temp.numerator;
	std::cout << "Enter the denominator: ";
	std::cin >> temp.denominator;

	return temp;
}

inline Fraction multiply_fractions(Fraction& fraction_x, Fraction& fraction_y) {
	return Fraction { fraction_x.numerator * fraction_y.numerator, fraction_x.denominator * fraction_y.denominator };
}

void print_fraction(const Fraction& fraction) {
	std::cout << "Your fractions multiplied are: " << fraction.numerator << "/" << fraction.denominator << std::endl;
}

int main() {
	Fraction fraction_1{ get_fraction() };
	Fraction fraction_2{ get_fraction() };
	
	Fraction result{ multiply_fractions(fraction_1, fraction_2) };

	print_fraction(result);

	return 0;
}