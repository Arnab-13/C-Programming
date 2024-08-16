#include<stdio.h>

int main(){
    int a=2,b=23,c=34,d=4;

    if(a>b && a>c && a>d){
        printf("the greatest number is %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatest number is %d",b);
    }
    else if(c>a && c>b && c>d){
        printf("the greatest number is %d",c);
    }
    else if(d>a && d>c && d>b){
        printf("the greatest number is %d",d);
    }
    return 0;
}