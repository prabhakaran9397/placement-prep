#include<bits/stdc++.h>
using namespace std;

void bin_print(int n)
{
	for(int i=31; i>-1; i--)
		cout << ((n>>i)&1);
	cout << endl;
}

int main(void)
{
	int n = 89;
	for(int i=0; i<10; i++){
		bin_print(n);
		n = n & 1;
	}
	return 0;
}
