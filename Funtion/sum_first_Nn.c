#include<stdio.h>

int sum_of_numbers(int);

int sum_of_numbers(int n){
    if(n==1){
        return 1;
    }

    return sum_of_numbers(n-1)+n;

}


int main(){
    printf("the sun of first 10 number is %d",sum_of_numbers(10));
    return 0;
}