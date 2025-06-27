#include<stdio.h>//What will be the output of the following C program: 
                 // int a = 4
int main(){      // printf("%d %d %d \n", a, ++a, a++);

    int a = 4;
    printf("%d %d %d\n", a, ++a, a++ );
    // INTERVIEW Q, most will say the output would be 4,5,5
    // no, evaluation will done from left to right.
    //  4 will go to a++ first, then ++a, then a; (6,6,4) 
    //evaluation will go from left to right instead of right to left
    // include "6 6 4, if the compiler's evaluation order is right to left, if else then it would be 4,5,5)
    return 0;
}
