#include<stdio.h>
int main(){
    int n,q;
    scanf("%d",&n);
    q= ((n&1));
    q?printf("odd"):printf("even");
}