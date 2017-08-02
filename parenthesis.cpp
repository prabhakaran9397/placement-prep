# include<stdio.h>
# define MAX_SIZE 100

void _printParenthesis(int pos, int n, int open, int close);

/* Wrapper over _printParenthesis()*/
void printParenthesis(int n)
{
	if(n > 0)
		_printParenthesis(0, n, 0, 0);
	return;
}	 
int c=0;
void _printParenthesis(int pos, int n, int open, int close)
{
	static char str[MAX_SIZE];	 

	if(close == n) 
	{
		//	printf("%s \n", str);
		c++;
		return;
	}
	else
	{
		if(open > close) {
			str[pos] = '}';
			_printParenthesis(pos+1, n, open, close+1);
		}
		if(open < n) {
			str[pos] = '{';
			_printParenthesis(pos+1, n, open+1, close);
		}
	}
}

/* driver program to test above functions */
int main()
{
	int n, i;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printParenthesis(i);
		printf("%d - %d\n",i,c);
		c=0;
	}
	return 0;
}

