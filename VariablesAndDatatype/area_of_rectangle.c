#include<stdio.h> // Problem 1: find the area of rectangle after taking input from user

int main(){
       // int length = 3;
       // int breadth = 2;

       int length, breadth;       //length and breadth can be defined as an integer together
       printf("Enter length:\n");  //first we'll print the asking what should be the length
       scanf("%d", &length);      // then we'll take the value by the user

       printf("Enter breadth:\n");
       scanf("%d", &breadth);
        printf("The area of this rectangle is:%d", length*breadth);
    return 0;
}
