#include<stdio.h> // Problem 4: calc simple interest for a set of values representing principal. number of years
                    // and rate of interest
int main(){

  int P,R,T;  //if P was in decimal, you need to define it by float P = "x"

printf("This program helps you calculate \"Simple Interest\"\n");
printf(" P = Principal Amount\n R = Annual Interest Rate\n T = Time (in years)\n");

printf("Principal Amount (P):\n");
scanf("%d", &P);
printf("Annual Interest Rate (R):\n");
scanf("%d", &R);
printf("Time (in years):\n");
scanf("%d", &T);

printf("The \"Simple Interest\" based on P,R,T is: %d", (P*R*T)/100 );

 return 0;
}
