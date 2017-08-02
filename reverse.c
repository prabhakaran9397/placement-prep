#include <stdio.h>

int main(void)
{
	int number;
	scanf("%d", &number);
	int reverse = 0;
	int num_copy = number;
	int num_len = 0;
	while(num_copy) {
		reverse = reverse*10 + num_copy%10;
		num_copy /= 10;
		++num_len;
	}
	//reverse is the answer
	printf("reverse of %0*d is %0*d\n", num_len, number, num_len, reverse);
	return 0;
}
