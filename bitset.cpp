#include<iostream>
#include<bitset>
#define I_SIZE 10000000
#define E_SIZE 10000000001
using namespace std;

bitset<E_SIZE> a;
int main(void)
{
	bitset<I_SIZE> b;
	// Access a[i], b[i] like a thug :p
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	return 0;
}
