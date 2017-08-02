#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(!b) return a;
	return gcd(b, a%b);
}

int main(void)
{
	int i, j;
	cin >> i;
	int sum;
	//for(i=0; i<100; ++i){
		for(j=1; j<=i; ++j){
			cout << i << ", " << j << '\t' << gcd(i, j) << endl;
		}
	//}
	return 0;
}
