#include<stdio.h>

int main(){
    char w;
    printf("enter character\n");
    scanf("%c", &w);
    printf("the value of character is %d\n",w);
    if(w >=97 && w <=122){
        printf("this character is a lowercase.");
    }
    else {
        printf("this character is not a lowercase.");
    }
    return 0;
}