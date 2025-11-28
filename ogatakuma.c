#include <stdio.h>
#include<string.h>

int main()
{
	int i;
	char s[]="Geeks";
	printf("%lu\n",strlen(s));

	for(i=1; i<=strlen(s); i++) {
		printf("%d ",i);
	}
	printf("\nThis statemant executes after for loop end!!!");

	return 0;
}