#include<stdio.h>
#include<string.h>
void stradd(char *s3,char *s1,char *s2,int m,int n){
    int i=0,j=0;
    for(;i<m;i++){
        if(s1[i]=='\0')
        continue;
        s3[i]=s1[i];

    }
    for(;j<n,i<m+n;j++,i++){
        if(s2[j]=='\0')
        break;
        s3[i]=s2[j];
    }
    s3[i]='\0';
    printf("%s",s3);
}
int main(){
    char s1[50],s2[50];
    // scanf("[\n]",s1);
    // scanf("[\n]",s2);
    gets(s1);
    gets(s2);
    int m=strlen(s1);
    int n=strlen(s2);
    char s3[m+n];
    stradd(s3,s1,s2,m,n);
      

}