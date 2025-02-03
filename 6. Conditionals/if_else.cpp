#include<iostream>
using namespace std;

int main(){
    int rating;
    cout<<"Enter your rating between 1 - 5 :";
    cin>>rating;
    if(rating == 5)
    {
        cout<<"You have rated 5";
    }else if(rating == 4)
    {
        cout<<"You have rated 4";
    }else if(rating == 3 )
    {
        cout<<"You have rated 3";
    }else if(rating == 2 )
    {
        cout<<"You have rated 2";
    }else if(rating == 1 )
    {
        cout<<"You have rated 1";
    }else {
        cout<<"Invalid rating. Please enter a number between 1 and 5.";
    }

    printf("%s",(rating==5)?"\nThanks for rating us 5" : "\nWe will work on it");

    return 0;
}