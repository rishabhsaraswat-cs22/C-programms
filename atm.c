#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the amount of multiple in 100s: ");
    scanf("%d",&a);

    a-=100;

    b=a/2000;
    printf("you will recive %d notes of 2000 >>>>\n",b);
    b=a%2000;
    
    b=b/500;
    printf("you will recive %d notes of 500 >>>>>\n",b);
    b=a%500;

    printf("you will recive %d notes of 100 >>>>\n",(b/100)+1);
    
    
    return 0;
}