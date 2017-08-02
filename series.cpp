#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
int main(void)
{
	int L1_a, L2_a, L3_a, L4_a;
	int L1_A[SIZE], L2_A[SIZE-1], L3_A[SIZE-2];
	int i;
	cin >> L1_a >> L2_a >> L3_a >> L4_a;
	L3_A[0] = L3_a;
	for(i=1;i<SIZE-2;i++)
		L3_A[i] = L3_A[i-1] + L4_a;

	L2_A[0] = L2_a;
        for(i=1;i<SIZE-1;i++)
                L2_A[i] = L2_A[i-1] + L3_A[i-1];

	L1_A[0] = L1_a;
        for(i=1;i<SIZE;i++)
                L1_A[i] = L1_A[i-1] + L2_A[i-1];

	for(i=0; i<SIZE; i++)
		printf("%03d     ",L1_A[i]);
	printf("\n    ");

	for(i=0; i<SIZE-1; i++)
		printf("%03d     ",L2_A[i]);
	printf("\n        ");

	for(i=0; i<SIZE-2; i++)
                printf("%03d     ",L3_A[i]);
        printf("\n            ");

	for(i=0; i<SIZE-3; i++)
                printf("%03d     ",L4_a);
        printf("\n");

	return 0;
}
