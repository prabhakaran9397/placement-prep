#include<stdio.h>
#define MAX 10 

int min(int a, int b)
{
	return a<b?a:b;
}
int move(int a, int b, int x, int y, int step)
{
	if(a<-1*MAX || b<-1*MAX || a>MAX || b>MAX)
	{
		return MAX*MAX;
	}
	if(a==x && b==y)
	{
		return step;
	}
	return	min(move(a-1, b-1, x, y, step+1), 
		min(move(a-1, b  , x, y, step+1),
		min(move(a-1, b+1, x, y, step+1),
		min(move(a  , b-1, x, y, step+1),
		min(move(a  , b+1, x, y, step+1),
		min(move(a+1, b-1, x, y, step+1), 
		min(move(a+1, b  , x, y, step+1),
		    move(a+1, b+1, x, y, step+1))))))));
}
int main(void)
{
	int a, b, x, y;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	int step = move(a, b, x, y, 0);
	printf("%d\n", step);
	return 0;
}

