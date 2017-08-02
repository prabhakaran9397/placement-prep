#include<iostream>
using namespace std;

int main(void)
{
	int A[] = {1,2,3,4,5};
	int N = 5;
	int Total = 1 << N;
	for ( int i = 0; i < Total; i++ ) {
		for ( int j = 0; j < N; j++) {
			if ( (i >> j) & 1 )
				cout << A[j];
		}
		cout << endl;
	}
	return 0;
}
