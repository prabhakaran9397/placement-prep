#include<iostream>
#include<set>
using namespace std;
int main(void)
{
	set<int> Hello;
	set<int>::iterator i;
	Hello.insert(2);
	Hello.insert(2);
	Hello.insert(3);
	Hello.insert(6);
	Hello.insert(6);
	Hello.insert(4);
	Hello.insert(5);
	Hello.insert(5);
	for(i=Hello.begin(); i!=Hello.end(); ++i)
		cout << *i << endl;
	return 0;
}
