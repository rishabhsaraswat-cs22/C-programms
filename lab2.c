#include<stdio.h>
#include<math.h>
 int pod(int a,int b){
     int c=1;
     for(int i=1;i<=b;i++){
        c=a*c;
     }
     return c;
}

void prime(int a,int b){
    for(int i=a;i<=b;i++){
        if(a==1||a==0)
           continue;
        int f=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
              f=0;
            break;}
        }
        if(f==1){
            printf("%d   ",i);
        }
    }

}

void armstrong(int a){
    int s=0,b;
    int z=log10(a)+1;
    int x=a;
    while(a>0){
        b=a%10;
        s=s+pod(b,z);
        a=a/10;
    }
    if(x==s)
    printf("armstrong no");
    else
    printf(" not a armstrong no");
}
int main(){
    int o;
   // scanf("%d",&o);
    prime(2,12);
}