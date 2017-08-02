#include<iostream>
using namespace std;
int add(int a, int b)
{
	if(b==0)
		return a;
	return add(a^b, (a&b)<<1);
}
int main(void)
{
	cout << add(8,9) << endl;
	return 0;
}
