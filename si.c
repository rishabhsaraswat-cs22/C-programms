#include<stdio.h>
int main()
{
    float P,R,T,Si;
    printf(" enter amount :   ");
    scanf("%f",&P);
    printf("enter rate :  ");
    scanf("%f",&R);
    printf("enter time in years : ");
    scanf("%f",&T);
    Si=P*R*T/100;
    printf(" the si is:%0.3f \n",Si);
    printf("the total amount is : %0.3f",P+Si);
    return 0;

}
