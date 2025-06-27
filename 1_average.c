#include<stdio.h> //Program 1: Write a program using function to find the average of three numbers.

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main(){
int a = 3, b=5, c=8;
printf("The average of a,b,c is: %f", average(a,b,c));


    return 0;
}
