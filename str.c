#include<stdio.h>
#include<string.h>

void rev(char a){
    
}
int main(){
    // int c=0,f=0,d=0,k=0;
     char a[100];
     fgets(a,100,stdin);
    // for(int i=0;a[i];i++){
    //     k++;
    //     if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
    //     c++;
    //     if(a[i]==' ')
    //     f++;
    //     if(a[i]<='9'&&a[i]>='0')
    //     d++;
    // }
    // printf("char is %d\n",c);
    // printf("space is %d\n",f);
    // printf("digit is %d\n",d);
    // printf("special char is %d",k-(c+f+d)-1);


// REVERSE 
    //printf("%s",strrev(a));

    
    for(int i=strlen(a)-1;i>=0;i--)
    printf("%c",a[i]);

}
