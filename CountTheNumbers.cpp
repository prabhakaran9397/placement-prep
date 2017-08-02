#include<bits/stdc++.h>
using namespace std;

int se(int n)
{   
    int v;
    for(; n; n/=10){
        v = n%10;
        if(v==6 || v==7 || v==8 || v==9 || v==0)
            return 0;
    }
    return 1;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, c;
	cin >> t;
	while(t--){
	    cin >> n;
	    c = 0;
	    for(i=1; i<=n; i++)
	        if(se(i))
	            c++;
	    cout << c << endl;
	            
	}
	return 0;
}