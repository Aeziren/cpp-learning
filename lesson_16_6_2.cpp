#include <iostream>
#include <vector>

template <typename T>
T findMax(const std::vector<T>& arr) {
    const int vectorLength{ static_cast<int>(arr.size()) };

    if (vectorLength == 0)
        return T{};

    T maxValue{ arr[0] };
    for (int index{ 1 }; index < vectorLength; ++index) {
        if (arr[index] > maxValue)
            maxValue = arr[index];
    }

    return maxValue;
}

int main()
{
    std::vector data1{ 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2{ -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3{ };
    std::cout << findMax(data3) << '\n';

    return 0;
}