#include<stdio.h> // Problem 2: calc the area of circle and modify the same program to calculate the volume of
                   // a cylinder given its radius and height
int main(){
    int radius;
    printf("The radius of the circle is:\n");
    scanf("%d", &radius);
    printf("The area of the circle is: %f\n", 3.14*radius*radius); //first %d is for radius, second is for result

    //next part of the program is simply the extention of this, finding the area of cylinder

    int height;
    printf("The height of the cylinder is:\n");
    scanf("%d", &height);
    printf("The volume of the cylinder is: %f", 3.14*radius*radius*height);

    return 0;
}
