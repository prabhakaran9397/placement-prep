#include <iostream>
#include <cstring>
using namespace std;

int main(void) 
{
	int a[10] = {0};
	int size = sizeof(a)/sizeof(*a);

	for(int i=0; i<size; ++i)
		cout << a[i] << '\t';
	cout << '\n';
	memset(a, -1, sizeof a);
	for(int i=0; i<size; ++i)
		cout << a[i] << '\t';
	cout << '\n';
	return 0;
}
