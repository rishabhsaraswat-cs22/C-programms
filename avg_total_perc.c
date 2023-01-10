#include<stdio.h>
int main()
{   
    float a,b,c,d,e,total;
    float per,avg;

    printf("enter the marks obtained in Physics: ");
    scanf("%f",&a);
    printf("enter the marks obtained in Maths: ");
    scanf("%f",&b);
    printf("enter the marks obtained in Chemistry: ");
    scanf("%f",&c);
    printf("enter the marks obtained in English: ");
    scanf("%f",&d);
    printf("enter the marks obtained in Computer Science: ");
    scanf("%f",&e);

    total=a+b+c+d+e;
    avg=total/5;
    per=(total/500)*100;
    printf(" total marks obtained: %0.3f \n average marks obtained in each subject: %0.3f \n percentage: %0.3f %%",total,avg,per);

}