#include<iostream>
#include<map>
using namespace std;
int main(void)
{
	string word;
	cin >> word;
	int m = word.size();
	map<char, int> anagram, temp;
	for(int i=0; i<m; ++i)
		anagram[word[i]]++;
	if(anagram['z']>0)
		cout << "Hi" << '\n';
	return 0;
}
