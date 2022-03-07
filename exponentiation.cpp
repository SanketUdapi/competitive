#include <bits/stdc++.h>

int main()
{
    int a = 500;
    int b = 30;
    long long res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res *= a;
        }
        a *= a;
        b /= 2;
    }
    std::cout << res;
    return 0;
}