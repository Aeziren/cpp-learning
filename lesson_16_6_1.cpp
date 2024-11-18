#include <iostream>
#include <vector>


template <typename T>
void printArray(std::vector<T>& arr) {
    const int vectorLength{ static_cast<int>(arr.size()) };

    for (int i{ 0 }; i < vectorLength; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

template <typename T>
T getNumberChoice(T min, T max) {
    T choice{};

    while (true) {
        std::cout << "Enter a number between " << min << " and " << max << ": ";
        std::cin >> choice;

        if (choice >= min && choice <= max)
            return choice;
    }
}

template <typename T, typename U>
int searchArray(std::vector<T>& arr, U target) {
    const int vectorLength{ static_cast<int>(arr.size()) };

    for (int i{ 0 }; i < vectorLength; ++i) {
        if (arr[i] == target) 
            return i;
    }

    return -1;
}       


int main()
{
    std::vector arr{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };
    
    auto numberChoice{ getNumberChoice(1.0, 9.0) };
    printArray(arr);

    int indexOfChoice{ searchArray(arr, numberChoice) };
    if (indexOfChoice == -1)
        std::cout << numberChoice << " was not found!\n";
    else
        std::cout << indexOfChoice << std::endl;

    return 0;
}