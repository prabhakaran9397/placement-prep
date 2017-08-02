#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	vector<string> chess;
	int b[2][2], i, j, k;
	string x;
	cin >> t;
	while(t--)
	{
		chess.clear();
		for(i=0; i<8; i++)
		{
			cin >> x;
			chess.push_back(x);
		}
		k = 0;
		for(i=0; i<8; i++)
			for(j=0; j<8; j++)
				if(chess[i][j] == 'B')
				{
					b[k][0] = i;
					b[k++][1] = j;
				}
		if(b[0][0] + b[0][1] == b[1][0] + b[1][1] || b[0][0] + b[0][1] == b[1][0] + b[1][1])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
