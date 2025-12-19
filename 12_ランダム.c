#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int a=(rand() % 20) +1;
    int b=(rand() % (20-a)) +1;
    int c=20-a-b;

    if(a>=b && a>=c)printf(" intelligence:%d,stamina:%d,charisma:%d>>>あなたはmageです。",a,b,c);
    else if(b>=a && b>=c)printf(" intelligence:%d,stamina:%d,charisma:%d>>>あなたはknightです。",a,b,c);
    else printf(" intelligence:%d,stamina:%d,charisma:%d>>>あなたはthiefです。",a,b,c);
    
    return 0;
}