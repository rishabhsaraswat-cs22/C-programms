#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    (a>0) && printf("%d",a);

    (a<0) && printf("%d",~(a)+1);
}