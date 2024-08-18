#include<stdio.h>

int main(){
    int i=1;
    int sum;
    do
    {
        sum +=i;
        i++;
    } while (i<11);
    printf("the sum of first ten natural number is %d",sum);
    return 0;
}