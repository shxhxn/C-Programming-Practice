#include<stdio.h> //Problem 4: Explain step by step the evaluation of 3*x/y - z+k
                  // given x = 2, y = 3, z = 3, k = 1
int main(){       // Answer:   0  
    
    int x = 2, y = 3, z = 3, k = 1;    // 3*x/y will be evaluated first, here left to right
    float e = 3*x/y - z+k;             // (3*2)/3, here bracket will be done first then divide 
                                       // and then finally z+k
    printf("the value is: %f", e); 


    return 0;
}
