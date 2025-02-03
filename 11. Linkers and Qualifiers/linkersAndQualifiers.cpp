/*
About linkers
https://stackoverflow.com/questions/3322911/what-do-linkers-do
https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link
*/

/*
 About Qualifiers
 There are two types of Qualifiers
 1) Modified Qualifiers: It provides whether a identifier value can be modified or not
 2} Life Duration Qualifier : It decides the life duration of a Indentifier

 Modified Qualifiers eg: const, volatitle, mutable.
 Life Duration Qualifiers eg: static, extern, register.
*/

#include <iostream>

using namespace std;

int updateLife()
{
    static int life = 3; // the static variable does not resets it to the default value when updated. whereas, in the simple variable will reset to the default value

    return ++life;
}

int main()
{
    int initialLife = 3;
    printf("Initial life is %d\n", initialLife);
    printf("The life update is %d\n", updateLife());
    printf("The life update is %d\n", updateLife());
    printf("The life update is %d\n", updateLife());
    return 0;


}