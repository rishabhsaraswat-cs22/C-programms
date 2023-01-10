#include<stdio.h>
#include<math.h>
int main()
{
    // int b=2, a,c=0;
    // scanf("%d",&a);
    // while(b<a/2)
    // {
    //     if(a%b==0)
    //     c++;

    //     b++;
    // }
    // if(c==1)
    //  printf(" not a prime no");
    //  else
    //  printf("prime no");
    
    // int a,b,x,r,c=0,sum=0;
    // scanf("%d",&a);
    // x=a;
    // b=a;
    // while(a)
    // {
    //     a=a/10;
    //     c++;
    // }  
    // while(x>0){
    //     r=x%10;
    //     sum=sum+pow(r,c);
    //     x=x/10;
    // }
    // printf("%d \n",x);
    // if(sum==b)
    // {printf("armstrong no");}
    // else
    // printf("not a armstrong no");

    // int a,b,c=0,x;
    // scanf("%d",&a);
    // x=a;
    // while(a>0)
    // {
    //     b=a%10;
    //     c=(c*10)+b;
    //     a=a/10;
    // }
    // printf("%d",c);
    // if(x==c)
    // printf("palindrome no ");
    // else 
    // printf("not a palindrome");

    // int a,b=0,c=1,d;
    // scanf("%d",&a);
    // printf("%d %d",b,c);
    // for(int i=0;i<a-2;i++){
    //     d=c+b;
    //     printf(" %d",d);
    //     b=c;
    //     c=d;
    // }

    int a,b=2,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a-1;i++){
        if(a%i==0)
          {
           // printf("%d ",i);
          sum=sum+i;
          }
        
    }
    if(sum==a)
    printf("perfect num");
    else 
    printf("not a perfect num");
    

}