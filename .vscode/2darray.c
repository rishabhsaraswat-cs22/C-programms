// #include<stdio.h>
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
            
//         }
//     }
    

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d ",a[i][j]);
            
//         }printf("\n");
//     }

// }






#include<stdio.h>
int main()
{
     int a[3][3];
     for( int i=0;i<3;i++)
     { 
          for(int j=0;j<3;j++)
         { 
          scanf("%d",&a[i][j]);
         
     
         }
         //sum=sum+a[i][j];
     }
     int b[3][3],c[3][3]={0};
     for( int i=0;i<3;i++)
     { 
          for(int j=0;j<3;j++)
         { 
          scanf("%d",&b[i][j]);
         
     
         }
        // sum=sum+a[i][j];
     }
     for( int i=0;i<3;i++)
     { 
            for( int j=0;j<3;j++)
         { c[i][j]=b[i][j]+a[i][j];
             
     
         }
     }  
      for( int i=0;i<3;i++)
     { 
          for(int j=0;j<3;j++)
         { 
          printf("%d",c[i][j]);
         
     
         }

     }

 return 0;
}