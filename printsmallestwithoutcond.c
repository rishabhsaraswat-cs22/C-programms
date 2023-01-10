#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st no.: ");
    scanf("%d",&a);
    printf("enter 2nd no.: ");
    scanf("%d",&b);
    c=(a>b)*b+(b>a)*a;
    printf("the smallest no. is %d",c);

}