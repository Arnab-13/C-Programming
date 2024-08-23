#include<stdio.h>

float average(int a, int b, int c);

float average (int a, int b, int c){
    return (a+b+c)/3.0;
}

int main(){
    int a=11;
    int b=4;
    int c=5;
    printf("the average of the numbers is %.2f",average(a,b,c) );
    return 0;
}
