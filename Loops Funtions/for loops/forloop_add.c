#include<stdio.h>

int main(){
    int sum=0;
    for (int i = 1; i < 11; i++)
    {
       sum +=i;
    }
    printf("the sum of first ten natural number is %d",sum);
    return 0;
}