#include<stdio.h>
#include<math.h>
int main(void)
{
	int n, m, i, j, s1, s2, e1, e2, v, k;
	int a[10][10];
	scanf("%d%d",&n,&m);
	for(i=0, k=0; i<n; i++)
		for(j=0; j<m; j++)
			a[i][j]=k++;
	for(s1=0, s2=0, e1=n, e2=m, v=0; v<k;s1++, s2++, e1--, e2--)
	{
		for(i=s1, j=s2; j<e2 && v<k; j++, v++) 		printf("%d  ",a[i][j]);
		for(i=s1+1, j=e2-1; i<e1 && v<k; i++, v++) 	printf("%d  ",a[i][j]);
		for(i=e1-1, j=e2-2; j>=s2 && v<k; j--, v++)	printf("%d  ",a[i][j]);
		for(i=e1-2, j=s2; i>s2 && v<k; i--, v++)	printf("%d  ",a[i][j]);
	}
	printf("\n");
	return 0;
}
