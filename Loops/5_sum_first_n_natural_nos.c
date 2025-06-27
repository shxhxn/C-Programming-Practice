#include<stdio.h> //Program 5: Write a program to sum the first 10 natural numbers using "WHILE LOOP"

int main(){

int n = 1; int sum = 0;

while (n<=10){    // loop : n is 1, and is less than 10,passes the condition & 1 moves to the next line,sum=0+1= 1
    sum = sum + n;//now sum = 1; and n++ makes n = 2, 2<10 so condition is passed again and n moves to next line
    n++;          // sum=1+2=3, n++ makes n = 3, n<10, condition okay, sum=3+3=6, and so on
}
printf("The sum of natural numbers till 10 is: %d\n", sum);


    return 0;
}
