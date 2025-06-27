#include<stdio.h> //Program 5: Write a program to sum the first 10 natural numbers using "WHILE LOOP"
                  // using "do-while" and "for" loops.
int main(){
 
int n = 1; int sum = 0; int sum1 = 0;

do
{
  sum = n + sum;
  n++;
} while (n<=10); 
printf("The sum of natural numbers till 10 (DO-WHILE LOOP) is: %d\n\n", sum);

for (int m = 1; m<=10; m++)
{
    sum1 = m + sum1;
}
printf("The sum of natural numnbers till 10(DO-LOOP) is: %d", sum1);



    return 0;
}
