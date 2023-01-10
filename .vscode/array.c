#include<stdio.h>
int main(){
    // int arr[5][5],key,n,f=0;
    // printf("enter the no. you want to enter in array:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // printf(" enter the no you want to find");
    // scanf("%d",&key);
        // for(int i=0; i<n;i++)
        // {
        //     if(arr[i]==key){
        //         f++;
        //         printf("the no is find at %d \n",i);
        //     }
            
        // }
        // if(f);
        // else 
        //     printf("the no not found \n");
        
        // int even[50],odd[50],k=0,j=0;
        // for(int i=0;i<n;i++)
        // {
        //     if (arr[i]%2==0)
        //     {
             
        //         even[j]=arr[i];
        //         j++;
        //     }
        //     else
            
        //         {
        //             odd[k]=arr[i];
        //             k++;
        //         }
        // }
        // printf("even no in array are ::  ");
        //  for (int a=0;a<j;a++){
        //      printf("  %d  ",even[a]);
        //  }
        //   printf("\n");
        //   printf("odd no in array are ::  ");
        // for (int b=0;b<k;b++){
        //     printf("  %d   ",odd[b]);
        // }


        // for(int i=0;i<n/2;i++)
        // {
        //     key=arr[i];
        //     arr[i]=arr[n-1-i];
        //     arr[n-1-i]=key;
        // }
        // for (int a=0;a<n;a++){
        //       printf("  %d  ",arr[a]);
        //   }

        // for(int i=0;i<n;i++){
        //     f=0;
        //     for(int j=0;j<n;j++){
        //         if(arr[i]==arr[j])
        //         f++;
        //     }
        //     printf(" %d comes %d times \n",arr[i],f);
        // }
        


   //2 d array 

//    +
    
    // if(a[i][i])1

    //   sum=sum+a[i][i];

    // if(i+j==n-1)
    // sum=sum+a[i][j];
    // printf("%d",sum);
    
    int i,j,a[3][3];
 for(i=0;i<3;i++) 
 {
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
 }  
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j||i+j==2){
       if(i==1&&j==1)
       continue;
        
        printf("%d ",a[i][j]);
        }
        else
        printf(" ");

        }
    }
printf("\n");
 
    
    
    
    
    
    
    
    
    return 0;

}