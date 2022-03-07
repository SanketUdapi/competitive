#include <bits/stdc++.h>

int calgcd(int a, int b)
{
    return a == 0 ? b : calgcd(b % a, a);
}

int main()
{
    int a = 500;
    int b = 30;
    int gcd = calgcd(a, b);
    std::cout << gcd;
    return 0;
}