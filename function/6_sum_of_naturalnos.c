#include<stdio.h>//program, write a recursive function to calculate the sum of first 'n' natural numbers.

int sum(int);

int sum(int n){
    // sum(n) = 1 + 2 + 3 + 4 +....n-1 + n; = formula
    //sum(n) = sum(n-1) + n; 
    if(n==1){ 
    return 1;
    }
    return(sum(n-1)+n);   //till 4 itll add all the number using recursive and then n
}

int main(){

printf("The sum of n natural numbers are: %d", sum(5));

    return 0;
}
