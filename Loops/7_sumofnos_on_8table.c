#include<stdio.h> //Problem 7: Write a program to calculate the sum of numbers occuring in the 
                  // multiplication table of 8
int main(){

int sum = 0;                  //explaination: here, we do the usual like sum of natural number type code
for (int n = 1; n <= 10; n++) // and the sum used to be sum = n + sum; but there is multiplication of 8 here
{                             // so n = n*8, and n will go from 1-10, so table of 8
    sum = sum + (8*n);
}
printf("The sum of values of table of 8 is: %d", sum);

    return 0;
}


// consider the table of 8 as the previous program's natural number till 10's " n ",
// so for that program (P6), we needed sum, here we will need sum too
//and we had to add all the natural numbers from 1-10 in the previous program too, here its the same (table of 8)
//so in P6 we were doing "sum = sum + n", and n = 1-10.
// here too, well do the same and n's value goes from 1-10 too but its getting multiplied by 8
// thereby making it the table of 8 and its sum
//think of it like an ALGORITHM
