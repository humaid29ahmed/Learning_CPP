#include<iostream>


void printHelloWorld()
{
    puts("Hello World!!");
}
int sayTwo()
{
    return 2;
}
int main(){
    printHelloWorld();
    printf("%d\n",sayTwo()+9);
    return 0;
}