#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convert_to_words(char *num)
{
	int len = strlen(num);
	if (len == 0)
		return;
	char *single_digits[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	char *two_digits[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char *tens_power[] = {"hundred", "thousand"};
	if (len == 1) {
		printf("%s\n", single_digits[*num - '0']);
		return;
	}
	while (*num != '\0') {
		if (len == 3 || len == 4) {
			if (*num -'0' != 0) {
				printf("%s ", single_digits[*num - '0']);
				printf("%s ", tens_power[len-3]);
			}
			--len;
		}
		else {
			if (*num == '1') {
				int sum = *num - '0' + *(num + 1)- '0';
				printf("%s\n", two_digits[sum]);
				return;
			}
			else if (*num == '2' && *(num + 1) == '0') {

				printf("twenty\n");
				return;
			}
			else {
				int i = *num - '0';
				printf("%s ", i? tens_multiple[i]: "");
				++num;
				if (*num != '0')
					printf("%s ", single_digits[*num - '0']);
			}
		}
		++num;
	}
}
int main(void)
{
	char number[10];
	scanf("%s",number);
	convert_to_words(number);
	putchar(10);
	return 0;
}
