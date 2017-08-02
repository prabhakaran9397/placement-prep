#include <iostream>
#define LIMIT 10
using namespace std;

string flip(string S)
{
	string New;
	int S_length = S.size();
	for(int i=0; i<S_length; ++i) {
		if(S[i] == '0') {
			New.push_back('1');
			New.push_back('0');
		} else {
			New.push_back('0');
			New.push_back('1');
		}
	}
	return New;
}

int main(void)
{
	string Old = "1";
	cout << "0 - 1" << endl;
	string New;

	for(int i=1; i<=LIMIT; ++i) {
		New = flip(Old);
		cout << i << " - " << New << endl;
		Old = New;
	}
}
