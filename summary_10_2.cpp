#include <iostream>

namespace constants
{
    constexpr double pi{ 3.14159 };
}

double convertToRadians(double degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    using angle = double;

    std::cout << "Enter a number of degrees: ";
    angle degrees{};
    std::cin >> degrees;

    angle radians{ convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}