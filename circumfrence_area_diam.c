#include<stdio.h>
#include<math.h>
int main()
{
    float r,diam,area,circumference;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    diam=2*r;
    area=3.14*pow(r,2);
    circumference=2*3.14*r;
    printf("the diameter is: %0.3f \n the area is: %0.3f \n the circumference is: %0.3f",diam,area,circumference);
    return 0;
    }