#include<stdio.h>//Write a program using recursion to calculate nth element of Fibonacci series.

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,.... sum of pichla two number = next number
//fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n){   // " n " is the position, like 1st, 2nd..
    if(n==1 || n ==2){
    return (n-1);
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
int n = 5;
printf("The value of fibonacci series at %d is %d", n, fibonacci(n));

    return 0;
}
