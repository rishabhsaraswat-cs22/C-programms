#include<stdio.h>
int main(){
    int a,b,c=0,d=1;
    scanf("%d",&a);
    for(int i=0;i<a-2;i++)
    {
        printf("%d ",c);
       b=c+d;
       c=d;
       d=b;
    }
    printf("%d %d",c,d);
    return 0;
}