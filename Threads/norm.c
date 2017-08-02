#include <stdio.h>
#include <stdlib.h>

typedef long long int llint;

struct sum_num {
	llint number;	
	llint sum; 
};
typedef struct sum_num sum_num;

void findSum(void* arg)
{
	sum_num* Pair = (sum_num*) arg;
	llint i;
	Pair->sum = 0;
	for(i=1; i<=Pair->number; ++i)
		Pair->sum += i;
	return;
} 

int main(int total, char* numbers[])
{

	if(total < 2) {
		printf("Use like this %s <num 1> <num 2> ... <num n>", numbers[0]);
	}

	sum_num Pairs[total-1];
	
	int i;
	for(i=0; i<total-1; ++i) {
		Pairs[i].number = atoll(numbers[i+1]);
		findSum(&Pairs[i]);
	}
		
	for(i=0; i<total-1; ++i) {
		printf("Sum till %lld is %lld\n", Pairs[i].number, Pairs[i].sum);
	}

	return 0;
}
