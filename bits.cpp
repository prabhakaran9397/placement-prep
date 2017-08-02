#include<iostream>
#include<cstring>
using namespace std;
__int128_t t[100000000];
int main(void)
{
	int c[10]={1,2,3,4,5,6,7,8,9,10};
	int i, j;
	int n=10, bitsize=sizeof(int)*8;
	int m = 0;
	c[m/bitsize] &= (0<<(m%bitsize));
	for(i=0; i<n; i++){
		for(j=bitsize-1; j>-1; j--)
		{
			//c[i]= (1<<j);   	//to set 1;
			//c[i]= (0<<j);   	//to set 0;
			//c[i]= c[i]^(1<<j);	//to flip values
			cout << ((c[i]>>j)&1); 	//to access
		}
		cout << endl;
	}
	//cout << sizeof(t) << endl;
	//12800000000 Boolean Data Possible nearly 10^10
	//10^8 Normal Data Possible
	return 0;
}
