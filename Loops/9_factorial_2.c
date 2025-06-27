#include<stdio.h> //Problem 9: Write a program to calculate the factorial of a given number using FOR LOOP
                  // using "WHILE LOOP"
int main(){

int f; int factorial = 1; int i;
printf("Type the number you want to find the factorial of:\n ");
scanf("%d", &f);
i = f;   //just like the for loop
while (i>1)
{
    printf("value: %d\n", i);
    factorial = factorial*i;
    i--;
}
printf("Factorial of %d is: %d", f, factorial);


    return 0;
}
