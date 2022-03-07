#include <iostream>
#include <bits/stdc++.h>

int main()
{
    std::vector<char> q = {'a','b','c','g'}; 
    std::vector<std::vector<char>> v ;
    int n = q.size();
    for(int i = 0;i < (1<<n);i++){
        std::vector<char> r ;
        for(int j = 0;j < n;j++){
            if(i & (1<<j)){
                r.push_back(q[j]);
            }
        }
        v.push_back(r);
    }
    
    for(std::vector<char> x:v){
        for( char s :x){
            std::cout << s << " ";
        }
        std::cout <<  std::endl;
    }
    
    return 0;
}