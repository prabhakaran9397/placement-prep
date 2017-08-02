#include <iostream>
#include <bitset>
#include <cstdio>
#define M_SIZE 10000
using namespace std;

void print_lucky_numbers()
{
	bitset<M_SIZE> numbers;
	numbers.set();		//Everything is a lucky number before the operation!

	for(int i=2; i<M_SIZE; ++i) {
		int j=i, k=0, l=1;
		for(; l<M_SIZE; ++l){
			if(numbers[l]){
				k++;
			}
			if(k == j){
				numbers[l] = 0;
				j = j+i;
			}
		}
	}

	for(int i=1; i<M_SIZE; ++i)
		if(numbers[i])
			cout << i << "\t";
}

int main(void)
{
	print_lucky_numbers();
	putchar(10);	
	return 0;
}
