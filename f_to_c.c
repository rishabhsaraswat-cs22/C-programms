#include<stdio.h>
int main()
{
    float tempinC,tempinF;
    printf("enter the temp in fahrenheit : ");
    scanf("%f",&tempinF);
    tempinC=(tempinF - 32)*5/9;
    printf(" the temp in fahrenheit is: %0.2f F \n the temp in celcius is: %0.2f C",tempinF,tempinC);
}