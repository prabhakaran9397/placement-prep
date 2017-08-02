#include<bits/stdc++.h>
using namespace std;

int maxSumIS( int arr[], int n, int k)
{
    int i, j, max = 0;
    int msis[n];
    int lis[n];
 
    for(i=0; i<n; i++){
        msis[i]= arr[i];
        lis[i] = 1;
    }

    for ( i = 1; i < n; i++ ){
        for ( j = 0; j < i; j++ ){
        	if ( arr[i] > arr[j] && msis[i] < msis[j] + arr[i]){
                msis[i] = msis[j] + arr[i];
            }
        }
    }
 	
 	for(i=0; i<n; i++)
 		cout << msis[i] << " ";
 	cout << endl;
 	for(i=0; i<n; i++)
 		cout << lis[i] << " ";
 	cout << endl;
    for ( i = 0; i < n; i++ )
        if ( max < msis[i] )
            max = msis[i]; 
 
    return max;
}
 
/* Driver program to test above function */
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
   	for(int i=0; i<n; i++)
   		cin >> arr[i];
    printf("%d\n", maxSumIS( arr, n, k));
    return 0;
}