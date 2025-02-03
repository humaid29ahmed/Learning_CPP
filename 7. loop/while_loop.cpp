#include<iostream>
using namespace std;

int main(){
    int numbers[] = {7,8,9,4,5,6,1,2,3};
    int i = 0;
    while(i<9){
        if(i == 3)
        {
            cout<<"Break the loop from here"<<endl;
            i++;
            continue;
        }
        cout<<"Element in position "<<i<<" is "<<numbers[i]<<endl;
        i++;
    }
    return 0;
}