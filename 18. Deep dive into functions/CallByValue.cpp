#include<iostream>

using namespace std;
int updateLife(int abc)
{
    return ++abc;
}
int main()
{
    int life = 3;

    cout<<updateLife(life)<<endl;
    cout<<updateLife(life)<<endl;//Here when we pass the value we are just passing the copy of it thus it just increments by 1 so this  
                                 // is called call by value
    
    return 0;
}