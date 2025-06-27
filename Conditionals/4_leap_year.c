#include<stdio.h> // Problem 4: To find whether a year entered by a user is a leap year or not
                 // condition for leap year Leap year if divisible by 4 and not by 100, unless also divisible by 400
                 // divisible by 4 and not divisible by 100 = leap year
int main(){      // divisible by 4, 100 and 400 = leap year
                 // divisible by 4 and 100 but not 400 = not a leap year
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0 ) || ( year % 400 == 0)){
        printf("It is a leap year\n");
    }
    else{
        printf("Its not a leap year \n");
    }


     
    return 0;
}
