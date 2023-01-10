#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("enter the no  :  \n  enter the exponent b: \n");
    scanf("%lf%lf",&a,&b);
    c=pow(a,b);
    printf("the value of a^b is:  %0.3lf",c);
    return 0;
}