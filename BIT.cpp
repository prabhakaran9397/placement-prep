#include<bits/stdc++.h>
using namespace std;

void PrintBin(int n)
{
	for(int i=31; i>-1; i--)
		cout << ((n>>i)&1);
	cout << '\n';
}

int main(void)
{
	int a;
	cin >> a;
	PrintBin(a);
	PrintBin(-a);
	cout << '\n';
	while(a){
		a -= (a & -a);
		PrintBin(a);
	}
	return 0;
}
