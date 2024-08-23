#include<stdio.h>

float f2c(float);
float f2c(float f){
    return ((f-32)/9)*5;         // c/5=f-32/9
}
int main(){
    float f=132;
    printf("%.2f ferenhiteis equal to %.2f in celsius ",f,f2c(f));
    return 0;
}