#include<iostream>

using namespace std;

int main(){
    printf("The value of long double is %ld bits",sizeof(long double)*8);
    printf("\nThe value of double is %d bits",sizeof(double));
    printf("\nThe value of float is %d bits",sizeof(float));
    printf("\nThe value of long int is %ld bits",sizeof(long int));
    float value1 = 20.20;
    printf("\nValue of float is %1.50f", value1); // Here %1.5f is used to print the value of flaot with certain precision

    float value2 = 20.20; //This is how you declare a float value

    if(value1 == 20.20) // Eventhough both values looks equal but its different because of precision value that exist in these value
    {
        cout << "Both values are equal";
    }else{
        cout << "Both values are not equal";
    }

    return 0;
}