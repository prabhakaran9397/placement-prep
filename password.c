#include <stdio.h>
#include <string.h>
#include <unistd.h>

void getLine(char* input)
{
	scanf("%[^\n]", input);
	getchar();
}

int main(void)
{
	char Username[1024];
	char Password[1024];
	printf("> ");
	getLine(Username);
	printf("> ");
	strcpy(Password, getpass(""));
	puts(Username);
	puts(Password);
	return 0;
}
