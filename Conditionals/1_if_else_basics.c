#include<stdio.h> // Problem 1: what will be the output of this code:
                  // answer: it would be "I am 11", because there is a single = at (a=11) not (a==1)
int main(){       // so itll give I am 11, its an interview and exam question
    int a = 10;
    if (a = 11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }


    return 0;
}
