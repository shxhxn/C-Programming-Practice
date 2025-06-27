#include<stdio.h> // Problem 2: Write a program to determine whether a student has passed or failed.
                  // To pass, a student requires a total of 40% and at least 33% in each subject. Assume there
int main(){       // are three subjects and take the marks as input from the user.

int a; 
printf("Enter the marks of first subject: \n");
scanf("%d", &a);
int p = a;

int b; 
printf("Enter the marks of second subject: \n");
scanf("%d", &b);
int q = b;


int c; 
printf("Enter the marks of third subject: \n");
scanf("%d", &c);
int r = c;

int d; 
printf("Enter the marks of fourth subject: \n");
scanf("%d", &d);
int s = d;

int e; 
printf("Enter the marks of fifth subject: \n");
scanf("%d", &e);
int t = e;

float percentage = (a + b + c + d + e)/5;
printf("Your total subject percentage turns out to be: %f\n", percentage);

if(percentage>=40){
printf("PASSED, you move to the next grade.\n");
}
else{
    printf("FAILED, you do not move to the next grade.\n");
}

if(p>=33){

}
else{
    printf("You failed in 'first subject'\n");
}

if(q>=33){

}
else{
    printf("You failed in 'second subject'\n");
}

if(r>=33){

}
else{
    printf("You failed in 'third subject'\n");
}

if(s>=33){

}
else{
    printf("You failed in 'fourth subject'\n");
}

if(t>=33){

}
else{
    printf("You failed in 'fifth subject'\n");
}



    return 0;
}
