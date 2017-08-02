#include<iostream>
using namespace std;

int main(void)
{
	int m , n;
	cin >> m >> n;
	int a[m][n];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin >> a[i][j]; 
	bool flag = 1;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i+1<m && j+1<n)
				if(a[i][j]+a[i+1][j+1] > a[i][j+1] +a[i+1][j]){
					flag = 0;	
					break;
				}
		}
	}
      	if(flag) cout << "yes";
	else cout << "No";
	cout << endl;
	return 0;
}
