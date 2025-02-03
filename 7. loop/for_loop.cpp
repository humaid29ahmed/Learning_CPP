#include<iostream>
#include<string>
using namespace std;

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++)
    {
        cout<<"Element in position "<<i<<" is "<<numbers[i]<<endl;
    }
    
    cout<<"Now using range"<<endl;
    for(int i:numbers){
        cout<<"Element "<<" is "<<i<<endl;
    }

    string word = "";
    for(int i=0;i<7;i++)
    {
        word = word + "* ";
        cout<<word<<endl;
    }

    for(int i = 1;i<7;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}