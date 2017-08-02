#include<iostream>

int main(void)
{
	for(int i=1; i<100; i++) {
		std::cout << "--" << i << "->";
		for(int n=i; n!=1; ) {
			if(n%2) {
				n = 3*n+1;
				std::cout << n << ' ';
			} else {
				n = n/2;
				std::cout << n << ' ';
			}
		}
		std::cout << "<---\n";
	}
	return 0;
}
