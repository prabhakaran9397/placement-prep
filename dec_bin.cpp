#include<iostream>
using namespace std;

void bin(int n)
{
	if(n==0) return;
	bin(n/2);
	cout << (n%2);
}

int main(void)
{
	int n;
	cin >> n;
	for(int i=13; i>-1; i--)
		cout << ((n>>i)&1);
	bin(n);
	cout << endl;
	return 0;
}
