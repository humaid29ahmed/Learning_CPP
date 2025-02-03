#include<iostream>
using namespace std;

int main(){
    int numbers[] = {7,8,9,4,5,6,1,2,3};
    int x = 0;
    do{
        cout<<"The element at position "<<x<<" is "<<numbers[x]<<endl;
        x++;
    }while(x < 9);
}