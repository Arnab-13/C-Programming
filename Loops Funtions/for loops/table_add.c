#include<stdio.h>

int main(){
    int sum=0;
    for (int i = 1; i < 11; i++)
    {
        sum += (8*i);
    }
    printf("the sum of table 8 is %d",sum);
    return 0;
}