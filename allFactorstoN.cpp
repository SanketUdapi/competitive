#include <iostream>
#include <bits/stdc++.h>

// 0(sqrt(n)+n) approach
int main()
{
    int a = 500;
    std::vector<int> v;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);
            if (i != sqrt(a))
            {
                v.push_back(a / i);
            }
        }
    }
    for (int x : v)
        std::cout << x << " ";

    return 0;
}

// o(n) approach

// void primeFactors(int n)
// {
//     int c=2;
//     while(n>1)
//     {
//         if(n%c==0){
//         cout<<c<<" ";
//         n/=c;
//         }
//         else c++;
//     }
// }

// /* Driver code */
// int main()
// {
//     int n = 315;
//     primeFactors(n);
//     return 0;
// }