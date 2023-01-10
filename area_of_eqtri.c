#include<stdio.h>
#include<math.h>
int main()
{    float a,area;
    printf("enter the side of equilateral triangle: ");
    scanf("%f",&a);
    area=sqrt(3)/4*pow(a,2);
    printf("area is %f unit sq",area);
    return 0;
}