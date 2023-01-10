#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,CI,amount;
    printf(" enter amount :   ");
    scanf("%f",&P);
    printf("enter rate :  ");
    scanf("%f",&R);
    printf("enter time in years : ");
    scanf("%f",&T);
    amount=P*(pow((1+R/100),T));
    CI=amount - P;
    printf("Compount intrest is: %0.4f \n",CI);
    printf("the total amount is : %f",amount);

    return 0;
}
