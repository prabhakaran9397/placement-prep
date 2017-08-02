#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

int main(int argc, char* argv[])
{
	char *s;
	char *a;
	s = (char *)malloc(0);
	a = (char *)malloc(0);
	printf("Enter S: ");
	gets(s);
	int s_len = strlen(s);
	printf("Enter A: ");
	gets(a);
	int a_len = strlen(a);
	int flag = 1;
	if(a_len == s_len) {
		int i;
		int alpha[26];
		memset(alpha, 0, sizeof(alpha));
		for(i=0; i<s_len; i++){
			alpha[s[i]%'a']++; 
			alpha[a[i]%'a']--;
		}
		for(i=0; flag && i<26; i++)
			if(alpha[i])
				flag = 0;
	} else {
		flag = 0;
	}
	printf("%s\n", flag?"Yes":"No");
	return 0;	
}
