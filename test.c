#include<stdio.h>
void foo(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
		a[i]++;
}
int main()
{
	int a[3][3]={{0,0,0},{0,0,0},{0,0,0}}, i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
			printf("%d\t",a[i][j]);
		putchar(10);
	}
	foo(a[1],3);
	putchar(10);
        for(i=0; i<3; i++){
                for(j=0; j<3; j++)
                        printf("%d\t",a[i][j]);
                putchar(10);
        }
	return 0;
}
