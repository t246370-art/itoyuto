/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int diff;
    char large,small;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c",&small);
    diff='a'-'A';
    large=small-diff;
    
    printf("大文字は%c　小文字は%c\n",large,small);

    return 0;
}