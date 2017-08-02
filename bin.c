#include<stdio.h>
int main(void)
{
	int n, i;
	for(n=3; n<1001; n+=3){
		printf("%d\t",n);
		for(i=31; i>-1; i--)
			printf("%d",(n>>i)&1);
		putchar(10);
	}
	return 0;
}
