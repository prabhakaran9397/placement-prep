#include<iostream>
using namespace std;

int main(void)
{
	int a = 64;		//Let us consider Power of 2 for simplicity
	int b = 3;
	int ls = a << b;	//Left Shift (cout); a*(2^b) a<<b
	int rs = a >> b;	//Right Shift (cin); a/(2^b) a>>b
	cout << "Left Shift  - 64 << 3 is " << ls << endl;
	cout << "Right Shift - 64 >> 3 is " << rs << endl;
	return 0;
}
