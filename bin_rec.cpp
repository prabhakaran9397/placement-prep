#include <bits/stdc++.h>
using namespace std;

void bin(long long n)
{
    if(!n) return;
    bin(n/2);
    cout << (n%2);    
}

int main(void)
{
    int a = -10;
    bin(a);
    cout << endl;
    return 0;
}
