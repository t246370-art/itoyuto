#include <stdio.h>
int main()
{
    int takuma,ogata,ogataku;
    takuma = 90;//たくまの体重
    ogata = 70;//おがたの体重
    ogataku =90;//おがたくの体重
    
    if(takuma==90)printf("たくまは90kgです。\n");
    if(ogata!=90)printf("おがたは、90kgではありません。\n");
    if(ogataku>=90)printf("おがたくは90kg以上です。\n");
    if(ogata<=70)printf("おがたは、70kg以下であります。\n");
    
    if(takuma==ogataku)printf("たくまとおがたくは同じ重さです。\n");
    if(ogata>takuma)printf("たくまはおがたより重いです。\n");
    return 0;
}