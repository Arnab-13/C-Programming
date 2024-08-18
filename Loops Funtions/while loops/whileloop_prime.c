#include<stdio.h>

int main(){
    int n;
    int prime=0;
    int i = 2;
    printf("enter the number:");
    scanf("%d",&n);
    while( i <n)
    {
      if(n%i==0){
        prime=1;
        break;
      }
      i++;
    }
    if(prime==0){  //if 'prime' is not specify it will became 1
        printf("this is a prime number.");
    }
    else{
        printf("this is not a prime number.");
    }
    return 0;
}