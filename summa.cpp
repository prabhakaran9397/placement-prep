#include<stdio.h>
int main(void)
{
	int i,len,pos;
	char s[200];
	printf("Enter the main string: ");
	scanf("%s",s);
	printf("Enter the pos nd length for the extraction of main string: ");
	scanf("%d%d",&pos,&len);
	printf("The substring is ");
	for(i=0;i<len;i++)
		printf("%c", s[i+pos]);
	printf("\n");
	return 0;
}
