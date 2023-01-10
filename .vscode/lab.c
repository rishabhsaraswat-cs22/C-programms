#include<stdio.h>
// int main(){
//     int arr[3][3],f=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);

//         }
//     }
//      for(int i=0;i<3;i++){
//         for( int j=0;j<3;j++){
//             if(i==j && arr[i][j]!=1)
//             {f=-1;
//             break;

//             }
//             if(i!=j&&arr[i][j]!=0){
//                 f=-1;
//                 break;
//             }

//         }
//     }
//     if(f==0)
//    printf("identity matrix");
//     else
//     printf("not");
// }


int main( ){
    int a[4][4]={1,2,3,4,4,5,6,7,7,8,9,3,1,4,8,5};
    int n=4;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (i%2!=0)
            {
               for(int k=0;k<n/2;k++){
                int t= a[k];
                a[k]=a[n-k-1];
                a[n-1]=t;
               }
            }
            
        }
    }

    for( int i=0;i<3;i++)
     { 
          for(int j=0;j<3;j++)
         { 
          printf("%d",a[i][j]);
         
     
         }

     }
}