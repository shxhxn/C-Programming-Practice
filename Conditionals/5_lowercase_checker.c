#include<stdio.h> //Program 5: Write a program to check whether a character entered by a user is lowercase or not.
                  //https://www.ascii-code.com/ (ASCII TABLE LINK)
int main(){

    char ch = 'a';
    printf("The character is: %c\n", ch);
    printf("The value of character is: %d\n", ch); //THIS WILL GIVE ASCII VALUE, values can be checked in ASCII table
    // Lower case characters are from 97-122 in ASCII values, keep it in mind

    char chh;
    printf("Enter the character you want to check if it is lower case or not: \n");
    scanf("%c", &chh);
    
    if(chh>=97 && chh<=122){
        printf("The character '%c' is a lowercase character\n", chh);
    }
    else{
        printf("The character '%c' is not a lowercase character\n", chh);
    }




    return 0;
}
