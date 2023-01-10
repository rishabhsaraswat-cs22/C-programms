#include<stdio.h>
int main()
{
    float h,b,area;
    printf("enter base:  ");
    scanf("%f",&b);
    printf("enter height:  ");
    scanf("%f",&h);
    area=0.5*(b*h);
    printf("%0.2f",area);
    return 0;
}