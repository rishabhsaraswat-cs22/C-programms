#include<stdio.h>
int main(){
    int a[6],b[100]={0},max;
    for(int i=0;i<6;i++){
     scanf("%d",&a[i]);
     max=a[0];

    }

    for(int i=0;i<6;i++){
        if(max<a[i]){
            max=a[i];

        }
        max++;
    }
    for(int i=0;i<6;i++){
      b[a[i]]++;

    }
    
    for(int i=0;i<max;i++){
        // if(b[i]>0){
        //     printf("%d comes %d times",i,b[i]);
        //     printf("\n");
        // }

        if(b[i]>1){
            printf("%d   ",a[i]);
        }
        
    }
//unique duplicacy repeation    
}