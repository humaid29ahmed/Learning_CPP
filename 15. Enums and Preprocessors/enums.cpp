#include<iostream>
using namespace std;
# define PI 3.14   
/*This is a preprocessor where the PI value is defined . 
This preprocessor which was defined should not have semicoln at the end*/

// The alternative for preporocessors is enums. enums is used to store the constants. It can only store integer values

enum values {
    INITIAL,
    DEBUG,
    INFO                    // by default the first value for INITIAL is Zero, DEBUG is 2 and so on..
};

enum words{
    HELLO = 10, //If we Initialize one value . The remaining enum variable gets updated automatically by increment of 1
    WORLD,
    BYE 
};

enum comp{
    COMPUTER, //This value is zero
    MOBILE=5, // Starts auto incrementing from 5 to the remaining variable by 1
    LAPTOP
};
int main(){
    cout<<"Testing the Value of PI: "<<PI<<endl;
    cout<<"Testing values enums"<<endl;
   
    cout<<"Value of INITIAL: "<<INITIAL<<endl;//o/p -> 0
    cout<<"Value of DEBUG: "<<DEBUG<<endl;// op-> 1
    cout<<"Value of INFO: "<<INFO<<endl;// op-> 2

    cout<<"Testing words enums"<<endl;
    cout<<"Value of HELLO: "<<HELLO<<endl;//op-> 10
    cout<<"Value of WORLD: "<<WORLD<<endl;// op-> 11
    cout<<"Value of BYE: "<<BYE<<endl;// op-> 12
    
    cout<<"Testing comp enums"<<endl;
    cout<<"Value of COMPUTER: "<<COMPUTER<<endl;//op-> 0
    cout<<"Value of MOBILE: "<<MOBILE<<endl;// op-> 5
    cout<<"Value of LAPTOP: "<<LAPTOP<<endl;// op-> 6

   
    return 0;
}