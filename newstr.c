#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int m=strlen(str1)+strlen(str2);
    char str3[m];
    int i=0,j=0;
    for(;i<strlen(str1);i++){
        if(str1[i]=='\0')
        continue;
        str3[i]=str1[i];

    }
    for(;j<strlen(str2),i<m;j++,i++){
        if(str2[j]=='\0')
        break;
        str3[i]=str2[j];
    }
    str3[i]='\0';
    printf("%s",str3);
}