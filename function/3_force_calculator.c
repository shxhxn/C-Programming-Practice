#include<stdio.h>//Write a program in C to calculate the force of attraction on a body of mass m. g = 9.8m/s

void force(float m){
    printf("The force of attraction on the body is: %f", m*9.8);
}

int main(){

float m;
printf("Enter the mass of the object: ");   //if im using float before the force part, i need to use return 
scanf("%f", &m);                            // on the same line, like return m*9.8;, if not then i gotta use void

force(m);

    return 0;
}
