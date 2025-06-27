#include<stdio.h> //Problem 3: Write a progam to check whether a program is divisible by 97 or not

int main(){

    int a;
    printf("Write the number you want to check the divisibility with 97: ");
    scanf("%d", &a);
    printf("If the remainder is 0, then it is divisible, if not, then it's not divisible.\n");
    printf("The remainder is: %d\n", 97%5);


    return 0;
}
