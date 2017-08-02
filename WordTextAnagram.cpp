#include<iostream>
#include<map>
using namespace std;
int main(void)
{
	string text, word;
	cin >> text >> word;
	int n = text.size(), m = word.size(), count=0, i;
	map<char, int> anagram, temp;
	map<char, int>::iterator it; 
	for(i=0; i<m; ++i) {
		++anagram[word[i]];
	}
	for(i=0, temp=anagram; i<=n; ++i) {
		if(i<n && temp[text[i]]) {
			--temp[text[i]];
		}
		else if(word.find(text[i])==-1 || i==n) {
			for(it=temp.begin(); it!=temp.end(); ++it){
				if(it->second){
					--count;
					break;
				}
			}
			++count;
			temp = anagram;
		}
		else if(!temp[text[i]]) {
			for(it=temp.begin(); it!=temp.end(); ++it){
				if(it->second){
					--count;
					break;
				}
			}
			++count;
			temp = anagram;
			--temp[text[i]];
		}
	}
	cout << count << '\n';
	return 0;
}
