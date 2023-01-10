#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float  per;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    
    if(a+b+c+d<310){
      printf("you cant score 82%% now");

    }
    else
    {   
        e=410-(a+b+c+d);
        if(e>40){
        printf("you need to minimum score   %d   to get 82%%",e);}
        else{
        printf("you will need to get min %d marks to pass and get 82%%",40);}
    }


}