#include<iostream>
#include<cstdint>
int main(){
    // 1 byte  = 8bits
    unsigned int value = 0;
    std::cout << value << std::endl;
    int hValue = 0b10010;
    printf("hValue = %d\n", hValue);

    printf("The size of Int is : %d bits\n", sizeof(int));
    printf("The size of short int: %d bits\n", sizeof(short int));
    printf("The size of long int: %d bits\n", sizeof(long int));
    printf("The size of long long int: %d bits\n", sizeof(long long int));
    printf("The size of unsigned int: %d bits\n", sizeof(unsigned int)); // unsigned int usually store postive values because it does assign a bit for the sign unlike signed int
    return 0;
    
}