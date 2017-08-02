#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, j, v;
	cin >> t;
	while(t--){
	    cin >> n;
	    for(i=0; i<n; i++){
	        v = n-1;
	        if(i<n/2){
	            for(j=0; j<i; j++)
	                cout << " ";
	            cout << "*";
	            for(j=0; j<v; j++)
	                cout << " ";
	            cout << "*";
	        } else {
	            for(j=0; j<i; j++)
	                cout << " ";
	            cout << "*";
	        }
	    }
	}
	return 0;
}
