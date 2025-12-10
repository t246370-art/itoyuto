#include <stdio.h>
#include<string.h>


int main()
{
    int i=0,j=0,k=0;
    char password[256];
    unsigned int len;
    
    printf("パスワードを入力してください。>>>");
    fgets(password,sizeof(password),stdin);
    len=strlen(password);
    
    if(len-1<8)printf("8文字以上に変更してください。\n");
    
    while(password[i]!='\0'){
        if(password[i]>=97 && password[i]<=122)break;
        else i++;
    }
    while(password[j]!='\0'){
        if(password[j]>=65 && password[j]<=90)break;
        else j++;
    }
    while(password[k]!='\0'){
        if(password[k]>=48 && password[k]<=57)break;
        else k++;
    }
    
    if(len==i)printf("小文字が含まれていません。\n");
    if(len==j)printf("大文字が含まれていません。\n");
    if(len==k)printf("数字が含まれていません。\n");
    if(len-1>=8 && len!=i && len!=j && len!=k)printf("パスワードは強力です。\n");

    return 0;
}