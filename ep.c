#include <stdio.h>
#include<math.h>
int main(void) {
	int n,num[8],i=0,j,bit[8],bin[8],b[8],k,d=0,t,s=0,v;
	scanf("%d",&t);
	while(s<t)
	{
		scanf("%d",&n);
		i=0;
		while(n!=0)
		{
			num[i++]=n%2;
			n=n/2;
		}
		d=0; v=0;
		for(j=4;j<8;j++)
		{
			d=d+num[j]*pow(2,v++);
		}
		for(j=0;j<4;j++)
		{
			d=d+num[j]*pow(2,v++);
		}
		printf("%d",d);
		printf("\n");
		s++;
	}
	return 0;
}