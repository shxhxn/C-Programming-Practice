#include<stdio.h> //Problem 2: Write a program to convert celcius to farenheit using function.

float convert(float);

float convert(float c){
    return((9*c)/5) + 32;
}

int main(){
float c = 45;
printf("Celcius to farenheit for %f is %d", convert(c));

    return 0;
}
