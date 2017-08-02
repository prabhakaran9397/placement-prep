#include <iostream>
#include <vector>
#include <string>
using namespace std;

string serialize(vector<string>& Strings)
{
	int TotalLength = 0;
	int NoOfStrings = Strings.size();
	int Length;
	string serialized;
	string strings;

	for(int i=0; i<NoOfStrings; ++i) {
		Length       = Strings[i].size();
		serialized  += to_string(Length) + '$';
		strings     += Strings[i];
		TotalLength += Length;
	}
	
	string TotalLength_S = to_string(TotalLength);
	serialized           = TotalLength_S + '$' + serialized + strings;
		
	return serialized;
}

vector<string> deserialize(string& String)
{
	int FullLength   = String.size();
	int StringLength = 0;
	int Position, Index, i;
	for(Index=0; String[Index]!='$'; ++Index)
		StringLength = StringLength*10 + String[Index] - '0';
	++Index;
	int StringStart  = FullLength - StringLength;
	
	vector<string> deserialized;

	for(Position=StringStart; Index<StringStart;) {
		string SingleString;
		for(StringLength=0; String[Index]!='$'; ++Index)
			StringLength = StringLength*10 + String[Index] - '0';
		Index++;
		for(i=Position; i-Position<StringLength; ++i)
			SingleString.push_back(String[i]);
		Position = i;
		deserialized.push_back(SingleString);
	}
	
	return deserialized;
}

int main(void)
{
	vector<string> Strings;
	string input;
	int NoOfStrings;
	cin >> NoOfStrings;
	cin.ignore();
	for(int i=0; i<NoOfStrings; ++i) {
		getline(cin, input);
		Strings.push_back(input);
	}
	string serial = serialize(Strings);
	cout << endl << serial << endl << endl;
	vector<string> deserial = deserialize(serial);
	NoOfStrings = deserial.size();
	for(int i=0; i<NoOfStrings; ++i)
		cout << deserial[i] << endl;	
	
	return 0;
}
