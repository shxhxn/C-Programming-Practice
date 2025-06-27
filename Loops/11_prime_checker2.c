#include<stdio.h>//Problem 11: To find whether a number entered by the user is prime or not
                 // using other (LOOP DO-WHILE LOOP)
int main(){

int n; int i = 2; int prime;
printf("Enter the number: \n");
scanf("%d", &n);

do
{ if(n%i == 0){
    prime = 1;
}
  i++;
} while (i<n);

if (prime)
{
  printf("%d is not prime", n);
}

else{
    printf("%d is prime: \n", n);
}

    return 0;
}
