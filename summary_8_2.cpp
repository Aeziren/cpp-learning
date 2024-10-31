// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>
#include <cmath>

bool isPrime(int x)
{   
    // No number lower than 2 is prime
    if (x <= 1)
        return false;
    
    // 2 is the only even number that is prime
    if (x == 2)
        return true; 

    int evenDivisions{ 0 };
    const int squareX{ static_cast<int>(std::sqrt(x)) };
    for (int counter{ 2 }; counter <= squareX; ++counter) {
        if (x % counter == 0)
            ++evenDivisions;
    }

    if (evenDivisions == 0)
        return true;
    else
        return false;  
}

int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}