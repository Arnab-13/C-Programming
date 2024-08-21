#include<stdio.h>

int main(){
    int a;
    printf("choose 1234 in a\n");
    printf("enter a\n");
    scanf("%d",&a);
    switch(a){
    case 1:
    printf("you have entered 1");
    break;
    case 2:
    printf("you have entered 2");
    break;
    case 3:
    printf("you have entered 3");
    break;
    case 4:
    printf("you have entered 4");
    break;
    default:
    printf("invalid input");
    
    }
    return 0;
}