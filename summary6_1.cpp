#include <iostream>

std::string_view getQuantityPhrase(int qtt) {
    if (qtt < 0)
        return "negative";
    else if (qtt == 0)
        return "no";
    else if (qtt == 1)
        return "one";
    else if (qtt == 2)
        return "a couple of";
    else if (qtt == 3)
        return "a few";

    return "many";
}

std::string getApplesPluralized(int numberOfApples) {
    return numberOfApples == 1 ? "apple" : "apples";
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