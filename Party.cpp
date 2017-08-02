#include<bits/stdc++.h>
#define end '\n'
#define tab ' '
using namespace std;
int cache[501][100], cost[100], fun[100];
int compute(int budget, int parties){
    if(parties < 0)
        return 0;
    if(cache[budget][parties] == -1){
        cache[budget][parties] = compute(budget,parties-1);
        if(cost[parties] <= budget) cache[budget][parties] = max(cache[budget][parties], fun[parties]+compute(budget-cost[parties],parties-1));
    }
    return cache[budget][parties];
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int budget, parties, high, low, mid, i, f;
    while(1){
        cin >> budget >> parties;
        if(budget==0 && parties==0)
            break;
        for(i=0; i<parties; i++)
            cin >> cost[i] >> fun[i];
        memset(cache,-1,sizeof(cache));
        f = compute(budget, parties-1);
        low = 0;
        high = budget;
        while(low<high){
            mid = (low + high)/2;
            if(f > compute(mid, parties-1))
                low = mid + 1;
            else
                high = mid;
        }
        cout << low << tab << f << end;
    }
    return 0;
}
