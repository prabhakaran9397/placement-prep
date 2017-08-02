#include<bits/stdc++.h>
using namespace std;

bool isTwo(int n)
{
	while(!(n%2) && n)
		n=n/2;
	return n==1;
}

int main(void)
{
	int t, n, i;
	bool m;
	cin >> t;
	while(t--)
	{
		cin >> n;
		m = 0;
		int a[n];
		for(i=0; i<n; ++i){
			cin >> a[i];
			if(isTwo(a[i]))
				m = 1;
		}
		m==0?cout << "NO" << endl : cout << "YES" << endl;
	}
	return 0;
}
