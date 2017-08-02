#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string a;
	char c;
	//for(int i=1; i<300; i++){
		int i = 980089;
		int j = i-1;
		a.clear();
		while(j>-1){
			c = alpha[j%26];
			a.push_back(c);
			j=j/26;
			j--;
		}
		reverse(a.begin(), a.end());
		cout << i << " - " << a << endl;
	//}
}