#include <bits/stdc++.h>

bool isPrime(int num)
{
    for (int i = 0; i < sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void main()
{
    int num = 67;
    std::cout << isPrime(num);
}
