#include <stdio.h>

int main(void)
{
	char s[100];
	scanf("%[^$]", s);
	getchar(); getchar();
	printf("(%s)\n", s);
	scanf("%[^$]", s);
	getchar(); getchar();
       	printf("(%s)\n", s);
	return 0;
}
