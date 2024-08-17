#include<stdio.h>

int main(){
    int n;
    int product=1;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
       product *=i;
    }
    printf("the factorial of %d is %d",n,product);
    return 0;
}