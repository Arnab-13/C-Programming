#include<stdio.h>
/*write a code of pass fall of three subject 
if any subject is less than 33 percent then fall
if total three less than 40 fail*/
int main(){
   int marks1,marks2,marks3;
   printf("enter maeks1:\n");
   scanf("%d",&marks1);
   printf("enter maeks2:\n");
   scanf("%d",&marks2);
   printf("enter maeks3:\n");
   scanf("%d",&marks3);
   printf("the obtained marks are %d %d and %d\n",marks1,marks2,marks3);
   if(marks1<33||marks2<33||marks3<33){
    printf("you failed because you scored less than 33 individual subject\n");
   }
   else if ((marks1+marks2+marks3)/3<40){
    printf("you failed because net percentage is less than 40");
   }
   else{
    printf("you passed.");
   }
   
    return 0;
}
