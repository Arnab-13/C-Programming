#include<stdio.h>

int sum(int,int);
int sum(int x,int y){
    printf("the sum is %d\n",x+y);
    return x+y;
}

int main(){

    sum(2,3);

    int a=4;
    int b=2;
    sum(a,b);
    return 0;
}