#include<stdio.h>
int main(){
    int a,b,sum=0,d,x=0;
    scanf("%d",&a);
    int temp=a;
    while(a>9)
    {
        
        while(a>0)
        {
            b=a%10;
        sum=sum+b;
        a=a/10;

        }
        a=sum;
        sum=0;
    }
    if(a==1)
         printf("%d is a magic no",temp);
    else 
         printf ("%d is not a magic no",temp);
}