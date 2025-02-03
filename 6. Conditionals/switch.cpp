#include<iostream>
using namespace std;

int main(){
    int rating;
    cout<<"Enter the rating between 1 - 5 :";
    cin>>rating;

    switch (rating)
    {
    case 1:
        cout<<"User has rated 1 star";
        break;
    case 2:
        cout<<"User has rated 2 stars";
        break;
    case 3:
        cout<<"User has rated 3 starts";
        break;
    case 4:
        cout<<"User has rated 4 stars";
        break;
    case 5:
        cout<<"User has rated 5 stars";
        break;
    default:
        cout<<"Invalid rating entered. Please enter a rating between 1-5"<<endl;
        break;
    }

    return 0;
}