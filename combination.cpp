#include <iostream>
#include <vector>

using namespace std;

void go(int offset, int k, vector<int> number, vector<int> temp, vector< vector<int> > &all) {
    if (k == 0) {
        all.push_back(temp);
        return;
    }
    for (int i=offset; i<=number.size()-k; ++i) {
        temp.push_back(number[i]);
        go(i+1, k-1, number, temp, all);
        temp.pop_back();
    }
}

vector< vector<int> > combination(int n)
{
    vector< vector<int> > all;
    vector<int> number, temp;
    for(int i=1; i<=n; ++i)
        number.push_back(i);
    for(int i=1; i<=n; ++i)
        go(0, i, number, temp, all);
    return all;
}

int main() {
    vector< vector<int> > all = combination(4);

    for(int i=0; i<all.size(); ++i) {
        for(int j=0; j<all[i].size(); ++j) {
            cout << all[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
