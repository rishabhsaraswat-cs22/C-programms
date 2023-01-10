#include<stdio.h>
int prime(int x);
int main(){

    int a,b;
    scanf("%d",&a);
    
    int k=prime(a);
    if(k==0){
        printf("prime no ");
    }
    else 
    printf("composite no ");
}
int prime(int x){
    int f=0;
    for(int i=2;i<x-1;i++){
        if(x%i==0)
        f=1;
        break;
    }
    return f;
}