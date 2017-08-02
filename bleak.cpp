#include<bits/stdc++.h>
using namespace std;

bitset<10020> N;

int CountSetBit(int n)
{
	int c=0;
	for(int i=0; i<15; i++)
		if((n>>i)&1) c++;
	return c;
}

int main(void)
{
	for(int i=1; i<10001; i++)
		N[i+CountSetBit(i)] = 1;
	for(int i=1; i<10020; i++)
		if(!N[i]) cout << i << endl;
}