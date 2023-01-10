#include<stdio.h>
int main()
{
    int  heads,legs;
    printf("enter the no of heads : ");
    scanf("%d",&heads);
    printf("enter the no of legs : ");
    scanf("%d",&legs);
    int count=0;
    //no of goat
    count=(legs)-2*heads;
    count=count/2;
    printf("the no of goat is %d \n",count);
    printf("the no of hens is %d",heads-count);


    
}