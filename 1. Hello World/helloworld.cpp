// #include<cstdio>
// using namespace std;

//   void nothing(){
//    puts("Nothing man, Just wanted to say Hello World");
// }

// char iWantedToSendCharacter()
// {
//    return 'A';
// }

// int main(){
 
//    puts("Click on Button");
//    puts("Create new Player");
//    puts("Add life to player");
//    nothing();
//    char value = iWantedToSendCharacter();
//    printf("%c", value);
//    return 0;
// }


 

#include<iostream>
int main(int argc, char* argv[]){
   std::cout << "Click on Button" << std::endl;
   std::cout << "Create new Player" << std::endl;
   std::cout << "Add life to player" << std::endl;
   std::cout << "Enter a Number\n";
   int number;
   std::cin>>number;
   std::cout<<"You entered: "<<number<<std::endl;

   return 0;
}

