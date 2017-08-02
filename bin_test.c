#include<stdio.h>
int main(void)
{
	int i, j;
	for(i=0; i<8; ++i){
		for(j=0; j<3; ++j)
			printf("%d",(i>>j)&1);
		putchar(10);
	}
	return 0;
}
