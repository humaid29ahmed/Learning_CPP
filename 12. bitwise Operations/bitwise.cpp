#include<iostream>
using namespace std;
int main() {
    cout << "Bitwise AND operation:"<<(9&8)<<endl;
    /*
    8 - 1000 9- 1001
     1000
     1001
     _______
      1000 = 8
    */

   cout<<"Bitwise OR operation:"<<(8|9)<<endl;
   /*
   1000
   1001
   _____
   1001 = 9
   */
 
  cout<<"Bitwise NOT operation:"<<(~9)<<endl;
  /* 9 - 1001 ~9 - 10110=-10 , -10 because the leftmost bit becomes 1 which is a bit for negative numbers
   -(n+1) -> -(9+1) -> -10
  */ 

  cout<<"Bitwise XOR operation : "<<(5 ^ 4)<<endl;
  /*
   1001         0101                If both bits are same = 0
   1000         0100                If both bits are different = 1
   _____        _____
   0001 = 1     0001 = 1
  */
 cout<<"Bitwise LifeShift operation:"<<(9<<1)<<endl;
 /*
  9 - 01001 -> Shift bits position towards left by removing the most significant bit and adding zero at the place of least significant bit
  18 -10010
  a<<b -> a*(2^b)
 */
  cout<<"Bitwise Right Shift operation:"<<(9>>1)<<endl;
  /*
   9 - 01001 -> Shift bits position towards right by removing the least significant bit and adding zero at the place of most significant bit
   4 - 00100
  a>>b -> a/(2^b)
 */
  return 0;

}