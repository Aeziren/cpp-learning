#include <iostream>

int main()
{
    std::cout << "How old are you?\n";

    int age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    constexpr int ageToDriveInTexas{ 16 };
    if (age >= ageToDriveInTexas)
        std::cout << "Yes";
    else
        std::cout << "No";

    std::cout << ".\n";

    return 0;
}