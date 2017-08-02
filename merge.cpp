#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for(int i=0; i<n; ++i)
        cout << a[i] << "  ";
    cout << endl;
}

int main(void)
{
    int m_n, i, j, n, temp;
    cin >> m_n;
    int a[m_n];
    for(i=0; i<m_n; ++i)
        cin >> a[i];
    cin >> n;
    int b[n];
    for(i=0; i<n; ++i)
        cin >> b[i];
    
    for(i=0; i<n; ++i) {
        for(j=0; j<m_n; ++j) {
            if(a[j]!=-1 && a[j] > b[i]) {
                temp = a[j];
                a[j] = b[i];
                b[i] = temp;
            }
        }
    }
    print(a, m_n);
    print(b, n);
    for(i=1; i<m_n; ++i) {
        for(j=i-1; j>-1 && a[j+1]!=-1 && a[j]==-1; --j) {
            a[j] = a[j+1];
            a[j+1] = -1;
        }
    }
    print(a, m_n);
    return 0;
}

