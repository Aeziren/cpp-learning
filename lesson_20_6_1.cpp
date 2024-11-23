#include <iostream>
#include <string>
#include <array>
#include <algorithm>

struct Student {
	std::string m_name{};
	double m_points{};
};

bool cmp(const Student& x, const Student& y) {
    return x.m_points < y.m_points;
}


int main() {
    std::array<Student, 8> arr{
  { { "Albert", 3 },
    { "Ben", 5 },
    { "Christine", 2 },
    { "Dan", 8 }, // Dan has the most points (8).
    { "Enchilada", 4 },
    { "Francis", 1 },
    { "Greg", 3 },
    { "Hagrid", 5 } }
    };


    Student best_student {std::max_element(arr.begin(), arr.end(), cmp}
    std::cout << 


}