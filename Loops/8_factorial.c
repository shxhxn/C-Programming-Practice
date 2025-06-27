#include<stdio.h> //Problem 8: Write a program to calculate the factorial of a given number using FOR LOOP

int main(){

int f;
printf("Write the number you want a factorial of: ");
scanf("%d", &f);
int factorial = 1;  //we gave value of factorial as 1 because we are to multiply, and factorial 0 will give us 0 value
for (int i = f; i ; i--)
{
    printf("value = %d\n", i);
    factorial = factorial * i; // 1*5 = 5, 5*4=20, 20*3=60, 60*2=120, 120*1= 120, if user takes 5 value to find the f 
}
printf("Factorial of %d = %d\n", f, factorial);



    return 0;
}
