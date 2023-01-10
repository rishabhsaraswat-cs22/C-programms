#include <stdio.h>

int main()
{
    int a,b,i=1;
    scanf("%d%d",&a,&b);
    while(i<a&&i<b){
        int x=a%i;
        int y = b%1;
        if(x==0&&y==0)
        i++;    
    }
   int g=i;
   printf("hcf is %d",g);
   printf("lcm is %d",(a+b)/g);
}