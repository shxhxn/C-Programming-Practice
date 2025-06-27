#include<stdio.h> // Problem 3: program for income tax of individuals by taking their salary
                  // // Income ≤ 2.5L → No tax, 2.5L–5.0L → 5% tax, 5.0L–10.0L → 20% tax, Above 10.0L → 30% tax
int main(){

    int income;
    float tax1, tax2, tax3;
    printf("Enter your income: \n");
    scanf("%d", &income);

    if(income<250000){
       printf("You dont need to pay any tax.\n");
    }
 else if(income>=250000 && income<500000){
    tax1 = income - (0.05*income);
    printf("You need to pay rupees %f as tax\n", tax1 );
}
else if(income>=500000 && income<1000000){
    tax2 = income - (0.2*income);
    printf("You need to pay rupees %f as tax\n", tax2 );
}
else if(income>1000000){
    tax3 = income - (0.3*income);
    printf("You need to pay rupees %f as tax\n", tax3 );
}

    return 0;
}
