#include <iostream>
#include <bits/stdc++.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int j = 2; j <= sqrt(num); j++)
    {
        if (num % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 500;
    for (int i = 2; i <= a; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << " ";
        }
    }

    return 0;
}