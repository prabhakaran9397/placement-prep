#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int i, j, n;
	string a, s;
	cin >> a;
	s = a;
	sort(a.rbegin(), a.rend());
	while(a!=s)
	{
		cout << a << endl;
		for(i=a.size()-1; i>-1; i--)
		{
			if(i-1>-1 && a[i-1]<a[i])
			{
				for(j=a.size()-1; j>i && a[i-1]>=a[j]; j--);
				swap(a[i-1], a[j]);
				sort(a.begin()+i, a.end());
				break;
			}
		}
	}
	return 0;
}
