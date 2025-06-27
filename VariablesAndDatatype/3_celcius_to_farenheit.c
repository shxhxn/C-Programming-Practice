#include<stdio.h> // Program 3: to convert celcius to farenheit

int main(){

    int celcius;
    printf("What is the temperature in \"celcius\"?:\n ");
    scanf("%d", &celcius);
    printf("Same temperature but in \"Farenheit\" is:%f\n", (celcius*1.8)+32);
    return 0;
}
