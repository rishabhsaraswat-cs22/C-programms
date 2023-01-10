#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 1st angle: ");
    scanf("%d",&a);
    printf("enter the 2nd angle: ");
    scanf("%d",&b);
    c=180-(a+b);
    printf("the third angle is: %d",c);
    return 0;
}