#include<iostream>

int main()
{
    int i=10;
    int& ref=i;
    ref=3;
    std::cout<<i;
}