#include<stdio.h>

int main(){
    int radius,height;
    // volume of the cylinder is pi*r**2*h
printf("Enter the radius:\n");
scanf("%d", &radius);

printf("enter the height:\n");
scanf("%d",&height);

printf("the volume of the cylinder is %f",3.14*radius*radius*height);

    return 0;
}