#include<iostream>
using namespace std;

void merge(int a[], int s, int m, int e, int n)
{
	int c[n], i=s, j=m+1, k=s;
	while(i<=m && j<=e){
		if(a[i]<a[j]) c[k++]=a[i++];
		else c[k++]=a[j++];
	}
	while(i<=m) c[k++]=a[i++];
	while(j<=e) c[k++]=a[j++];
	for(i=s;i<k;i++) a[i]=c[i];
}


void split(int a[], int s, int e, int n)
{
	if(s<e){
		int m = (s+e)/2;
		split(a,s,m,n);
		split(a,m+1,e,n);
		merge(a,s,m,e,n);	
	}
}

void mergesort(int a[], int n)
{
	split(a,0,n-1,n);
}

int main(void)
{
	int a[100], i, n;
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];
	mergesort(a,n);
	for(i=0; i<n; i++)
		cout<< a[i] <<" ";
	cout<<endl;	
	return 0;
}
