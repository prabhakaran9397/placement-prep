#include <bits/stdc++.h>
using namespace std;

int send(int a[], int n)
{
	int store[n];
	store[0] = 1;
	bool sign;
	for(int i=1; i<n; ++i){
		store[i] = 1;
		sign = a[i]>0;
		for(int j=i-1; j>=0; --j){
			if(abs(a[j])<abs(a[i]) && store[i]<store[j]+1 && ((a[j]<0)==sign)){
				store[i] = store[j]+1;
				sign = !sign;
			}
		}
	}
	return *max_element(store, store+n);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	cout << send(a, n) << '\n';
	return 0;
}