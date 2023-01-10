#include<stdio.h>
int rem(int a[],int n){
    if(n==0||n==1)
    return n;
    int t[10];
    
    int j=0;
    
    for(int i=0;i<10;i++){
        if(a[i]!=a[i+1])
            t[j++]=a[i];
        
    }
    t[j++]=a[n-1];

    for(int i=0;i<j;i++){
        a[i]=t[i];
    }
return j;

    
}

int main(){
int a[]={1,2,2,3,4,4,4,5,6,7};
int n=10;
// for(int i=0;i<10;i++)
// scanf("%d",&a[i]);
int u=rem(a,n);
for(int i=0;i<u;i++){
    printf("%d  ",a[i]);

}
}