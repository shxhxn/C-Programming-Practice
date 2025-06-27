#include<stdio.h> //Problem 1: program to print multiplication table of a given number n.

int main(){

int n;
printf("Enter the number you want the multiplication table of: \n");
scanf("%d", &n);

for (int i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n", n, i, n*i);
}


    return 0;
}
