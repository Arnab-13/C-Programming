#include<stdio.h>

float force(float);
float force(float mass){
    return mass*9.8;
}

int main(){
    int m=6;
    printf("the force due to gravity is %.2f",force(m));
    return 0;
}