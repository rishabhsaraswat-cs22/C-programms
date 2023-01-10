#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d  %d",*a,*b);

}

int max(int *a,int *b,int *c){
    // if(*a>*b)
    //   if(*a>*c)
    //   return *a;
    //   else
    //   return *c;
    // else
    // return *b;
    int k=(*a>*b)&&(*a>*c)?*a:(*b>*c)?*b:*c;
    return k;
}

 void input(int m ,int n,int p[m][n]){
    printf(" enter elements \n");
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             scanf("%d",&p[i][j]);
            
         }
      }

}



 void output(int m,int n,int p[m][n]){
    for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             printf(" %d ",p[i][j]);
          
          }printf("\n");
      }

 }


void min_max(int *a,int n){
    int min=*a,max=*a;
    for(int i=0;i<n;i++){
        if(min>(*a))
        min=*a;
        if(max<*a)
        max=*a;

        a++;
    }
    printf("max : %d\n",max);
    printf("min : %d",min);
}

void copy(int *a,int n){
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=*a;
        a++;
    }
    
    for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
}
int main(){
    // int x,y,z;
    //  scanf("%d%d%d",&x,&y,&z);
    // int k=max(&x,&y,&z);
    // printf("%d",k);
    // int m,n;
    // printf("the size of array  ");
    // scanf("%d%d",&m,&n);
    // int a[m][n];
    // input(m,n,a);
    // output(m,n,a);
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter elements \n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //min_max(arr,n);
    copy(arr,n);


}