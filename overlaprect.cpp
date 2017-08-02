#include<iostream>
using namespace std;
int min(int a, int b)
{
    return a<b?a:b;
}
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
	int t, x1, y1, x2, y2, l1, m1, l2, m2, mi_x, ma_x, mi_y, ma_y, flag;
	cin >> t;
	while(t--){
	    cin >> x1 >> y1 >> x2 >> y2 >> l1 >> m1 >> l2 >> m2;
	    mi_x = min(x1, x2);
	    ma_x = max(x1, x2);
	    mi_y = min(y1, y2);
	    ma_y = max(y1, y2);
	    if(mi_x<=l1&&l1<=ma_x&&mi_y<=m2&&m2<=ma_y)
	        flag = 1;
	    else flag = 0;
	}
	return 0;
}