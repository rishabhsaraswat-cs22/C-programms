#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("enter length in cm:  ");
    scanf("%f",&cm);
    m=cm/100.0;
    km=cm/100000.0;
    printf("length in meter:  %f \n  length in kilometer :  %f",m,km);
    return 0;
}