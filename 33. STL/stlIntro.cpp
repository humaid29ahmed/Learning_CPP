/*
Generic Programming - Data types are not specified at the time of implementaion of Code Logic.
*/

#include<iostream>
using namespace std;

template<typename T>

T getBigger(T a, T b)
{
    return (a>b)? a : b;
}

int main()
{
    cout<<getBigger(3,5); // o/p 5
    return 0;
}