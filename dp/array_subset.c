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

// find if sum of sub sequence is equal to `b`

int solve(int A[], int n, int b)
{
    int dp[n+1][b+1];
    int i, j;
    for(i=0; i<=n; ++i) {
        for(j=0; j<=b; ++j) {
            // base cases
            if(i == 0 || j == 0) {
                if(i == 0) dp[i][j] = 0; // false for all empty set
                if(j == 0) dp[i][j] = 1; // when sum is 0 - true
            }
            // always `i` depends on `i-1` th state - that is why DP
            // element `A[i-1]` is greater than the current sum `j`
            // so excluding `A[i-1]` by simply retaining prev val
            else if (A[i-1] > j)
                dp[i][j] = dp[i-1][j];
            // when `A[i-1]` is lesser than the current sum `j`
            // `A[i-1]` may or may not be the cause for the answer
            // considering both cases
            else if (A[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
        }
    }

    printf("   ");
    for(j=0; j<=b; ++j)
        printf("%2d ", j);
    printf("\n");
    for(i=0; i<=n; ++i) {
        if(i == 0) printf("%2d ", 0);
        else printf("%2d ", A[i-1]);
        for(j=0; j<=b; ++j) {
            printf("%2d ", dp[i][j]);
        }
        printf("\n");
    }

    return dp[n][b];
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
