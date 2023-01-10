#include<stdio.h>
int main(){
    int age,a;
    printf("Enter your age: ");
    scanf("%d",&age);
    age>18 &&  printf("you are eligible to vote ");
    age<18 &&  printf("you are not eligible to vote ");
   
}