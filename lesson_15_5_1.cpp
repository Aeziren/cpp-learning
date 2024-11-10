#include <iostream>
#include <string>


template <typename T, typename U, typename V>
class Triad {
private:
	T m_data1{ };
	U m_data2{ };
	V m_data3{ };

public:
	Triad(T data1, U data2, V data3)
		: m_data1{ data1 }
		, m_data2{ data2 }
		, m_data3{ data3 }
	{
	}

	const T& first() const { return m_data1; }
	const U& second() const { return m_data2; }
	const V& third() const { return m_data3; }

	void print() const;
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const{
	std::cout << "[" << m_data1 << ", " << m_data2 << ", " << m_data3 << "]";
}

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}