#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int t = a; a = b; b = t;
}
void qsort(vector<int> &a, vector<int> &b, int s, int e)
{
    if(e>s){
        int p=s, i=s, j=e;
            while(i<=j){
                while(a[i]<a[p]) i++;
                while(a[j]>a[p]) j--;
                if(i<=j){
                    swap(b[i],b[j]);
                    swap(a[i], a[j]);
                    i++; j--;
                }
            }
            qsort(a, b, s, j);
            qsort(a, b, i, e);
    }
}
bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = arrive.size(), i, j, rooms;
    qsort(arrive, depart, 0, n-1);
    for(i=1; i<n; i++)
    	rooms = 0;
        for(j=0; j<i; j++)
            if(arrive[i]<depart[j]){
                rooms++;
                break;
            }
    for(i=0; i<n; i++){
        cout << i+1 << ": " << arrive[i] << " - " << depart[i] << endl;
    }
    return rooms<=K;
}
int main(void)
{
	int a[]= {13,14, 36, 19, 44, 1, 45, 4, 48, 23, 32, 16, 37, 44, 47, 28, 8, 47, 4, 31, 25, 48, 49, 12, 7, 8 };
	int b[]= { 28, 27, 61, 34, 73, 18, 50, 5, 86, 28, 34, 32, 75, 45, 68, 65, 35, 91, 13, 76, 60, 90, 67, 22, 51, 53};
	int c;
	std::vector<int> v;
	std::vector<int> u;
	int n= sizeof(a)/sizeof(a[0]);
	for(int i=0; i<n; i++)
		v.push_back(a[i]);
	for(int i=0; i<n; i++)
		u.push_back(b[i]);
	cout << n << endl;
	cout << hotel(v,u,c) << endl;
	return 0;
}
