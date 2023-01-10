#include<stdio.h>
#include<math.h>

int main()
{
    int a,n;
    printf("enter the no:  ");
    scanf("%d",&a);
    n=a;
    int z=0,c;
    while(a>0)
    {
        c=a%10;
        z = z+(c*c*c);

        a=a/10;
        
    } 
    if(n==z){
            printf("armstrong number");
        }
    else
        printf("not a armstrong no ");

   


}