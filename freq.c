#include <stdio.h>
#include<limits.h>
//count frequency of each element in array



//error
 
int main()
{
    int n,max;
    int b[100]={0};
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[n];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
        
    }
    for(i=0;i<max;i++)
    {
         if(b[i]>0)
         printf("%d=%d\n",i,b[i]);

        // if(b[i]>1)
        // printf("%d",i);
    }
return 0;
}