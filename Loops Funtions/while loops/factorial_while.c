#include<stdio.h>

int main(){
    int i=1;
    int n;
    int product=1;
    printf("enter the number:");
    scanf("%d",&n);
    while (i<=n)
    {
      product *=i;
      i++; 
    }
    
    printf("the factorial of %d is %d",n,product);
    return 0;
}