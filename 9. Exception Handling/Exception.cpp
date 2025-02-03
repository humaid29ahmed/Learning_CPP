#include<iostream>
using namespace std;

int main()
{
    float API_VERSION = 7.0;
    try{
        if(API_VERSION == 2)
        {
            cout<<"You are using the API _ VERSION : "<<API_VERSION<<endl;
        }else{
            throw API_VERSION;
        }

    }catch(int value)
    {
        cout<<"Error: Unsupported API version. Supported version is 2."<<endl;
        cout<<"You are using API version : "<<value<<endl;


    }catch(float value)
    {
        cout<<"Error: Unsupported API version. Supported version is 2."<<endl;
        cout<<"You are using API version : "<<value<<endl;
        cout<<"Handled float exception."<<endl;
    }
}