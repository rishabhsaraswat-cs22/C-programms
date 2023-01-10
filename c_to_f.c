#include<stdio.h>
int main()
{
    float tempinC,tempinF;
    printf("enter the temp in celcius : ");
    scanf("%f",&tempinC);
    tempinF=(tempinC*9/5)+32;
    printf(" the temp in celcius is: %0.2f C \n the temp in fahrenheit is: %0.2f F",tempinC,tempinF);
}