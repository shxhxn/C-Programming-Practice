#include<stdio.h> //Problem 10: To find whether a number entered by the user is prime or not
                  // prime is a number which gets divided by 1 and number itself
int main(){

int n; int prime = 0;
printf("Enter number: \n");
scanf("%d", &n);

for (int i = 2; i < n; i++) //if n = 5, int i will go till 2,3,4 (not 5 as i < n), and if any one number of the three
{                           // divides the number entered by the user, remainder becomes 0
    if(n%i==0){             // and the number is no longer prime any more
        prime = 1;
        break;
    }
}

if(prime){
    printf("%d is not a prime number,\n", n);

}
else{
    printf("%d is a prime number\n", n);
}

    return 0;
}
