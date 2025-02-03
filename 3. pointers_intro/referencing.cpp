#include<iostream>
using namespace std;

int main(){
    int score  = 200;
    int *myScore = &score;
    printf("Score variable value: %d\n",score);
    printf("Pointer myScore variable value: %d\n",*myScore);
    printf("myScore variable reference value: %p\n",myScore);

    int &scoreValue = score; // ScoreValue is a reference variable which hold the value of the score variable.
    scoreValue = 8000;  // If we change the value of scoreValue this change will reflects on the value of the score variable.
    printf("scoreValue variable value : %d\n",scoreValue);
    printf("Score value : %d\n",score);

    return 0;
}