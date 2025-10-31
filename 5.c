#include <stdio.h>

int main()
{
    int a,b;

    printf("２人の年齢を入力してください\n");
    printf("aさんの年齢を入力してください>>>");
    scanf("%d",&a);
    printf("bさんの年齢を入力してください>>>");
    scanf("%d",&b);
    
    if(a>19&&b>19)printf("ご入場ください");
    else if(a<20&&b>19)printf("aさんはおかえりください");
    else if(b<20&&a>19)printf("bさんはおかえりください");
    else printf("二人ともおかえりください");
    

    return 0;
}