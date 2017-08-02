#include<stdio.h>
#include<stdlib.h>
#define SIZE 1000

int stack[SIZE] = {0} ;
int top = -1;

int push(int x)
{
	if(top >= SIZE-1)
		return 0;
	stack[++top] = x;
	return 1; 
}

int pop()
{
	if(top <= -1)
		return 0;
	return stack[top--];
}

int evaluate(int b, int a, char op)
{
	if(op == '+')
		return a+b;
        if(op == '-')
                return a-b;
        if(op == '/')
                return a/b;
        if(op == '*')
                return a*b;
        if(op == '%')
                return a%b;
}

int main(void)
{
	char input[SIZE];
	string output;
	int i;
	scanf("%[^\n]",input);
	for(i=0; input[i]!='\0'; i++){
		if(input[i]!=' '){
			if(input[i]>='0' && input[i]<='9'){
				push(input[i]-'0');
			}else{
				int v1 = pop();
				int v2 = pop();
				push(evaluate(v1, v2, input[i]));
			}
		}
	}
	printf("%d\n",pop());
	return 0;
}
