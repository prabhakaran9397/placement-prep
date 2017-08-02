#include <stdio.h>
#include <string.h>
#include <limits.h>
#define s_int(n) scanf("%d", &n)
#define s_arr(A, n) for(_i_=0; _i_<n; ++_i_) { s_int(A[_i_]); }
#define p_int(n) printf("%d\n", n)
#define p_arr(A, n) for(_i_=0; _i_<n; ++_i_) { printf("%d ", A[_i_]); } printf("\n")
#define clear_arr(A, v) memset(A, v, sizeof A)
#define test_begin int _t_, _i_; s_int(_t_); while(_t_--) {
#define test_end }

// Minimum number of coins needed to denominate `b`

int solve(int A[], int n, int b)
{
    // Bottom Up approach
    int dp[b+1];
    int i, j;
    for(i=0; i<=b; ++i)
        dp[i] = INT_MAX;
    // Base case - need only one coin
    for(i=0; i<n; ++i)
        if(A[i] <= b)
            dp[A[i]] = 1;
    // Building from 1 to b - bottom-up
    for(i=1; i<=b; ++i) {
        // need to compute case
        if(dp[i] == INT_MAX) {
            int temp_min = INT_MAX;
            for(j=0; j<n; ++j)
                if(i-A[j] >= 0 && dp[i-A[j]] != INT_MAX && dp[i-A[j]]+1 < temp_min)
                        temp_min = dp[i-A[j]]+1;
            dp[i] = temp_min;
        }
    }
    return dp[b];
}

// main template
int main(void)
{
    test_begin

        int n;      s_int(n);
        int A[n];   s_arr(A, n);
        int b;      s_int(b);
        p_int(solve(A, n, b));    // print answer

    test_end

    return 0;
}
