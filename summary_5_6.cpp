#include <iostream>
#include <string>


constexpr std::string getQuantityPhrase(int quantity) {
    std::string result{};

    if (quantity < 0)
        result = "negative";
    else if (quantity == 0) 
        result = "no";
    else if (quantity == 1)
        result = "a single";
    else if (quantity == 2)
        result = "a couple of ";
    else if (quantity == 3)
        result = "a few";
    else
        result = "many";

    return result;
}

constexpr std::string getApplesPluralized(int number_apples) {
    return (number_apples == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}