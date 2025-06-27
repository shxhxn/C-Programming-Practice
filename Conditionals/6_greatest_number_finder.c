#include<stdio.h> // Program 6: Program to write the greatest of 4 number entered by the user.

int main(){

    int a, b, c, d;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("Enter the third number: \n");
    scanf("%d", &c);
    printf("Enter the fourth number: \n");
    scanf("%d", &d);

    if(a > b && a > c && a > d){    //DONT WRITE if(a>b,c,d).
        printf("The greatest number is %d\n", a);
    }
        else if(b > a && b > c && b > d){
        printf("The greatest number is %d\n", b);
    }
        else if(c > a && c > b && c > d){   
        printf("The greatest number is %d\n", c);
    }
        else{
        printf("The greatest number is %d\n", d);
    }
   

    return 0;
}
