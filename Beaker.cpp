#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n, q, i, r, l, x, t, c=0;
	cin >> n >> q;
	int a[n];
	for(i=0; i<n; ++i)
		cin >> a[i];
	while(q--){
		cin >> r >> l >> x;
		for(i=r-1, t=0; i<l; ++i)
			t += a[i];
		if(t>=x)
			c++;
	}
	cout << c << '\n';
	return 0;
}