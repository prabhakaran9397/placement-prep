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
#define max(a, b) (a) > (b) ? (a) : (b)

// 0-1 Knapsack
int solve(int v[], int w[], int n, int b)
{
    int dp[n+1][b+1];
    int i, j;
    for(i=0; i<=n; ++i) {
        for(j=0; j<=b; ++j) {
            // base cases - empty set or weight is 0
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            // always `i` depends on `i-1` th state - that is why DP
            // weight `w[i-1]` is greater than the current weight `j`
            // so excluding `w[i-1]` by simply retaining prev val
            else if (w[i-1] > j)
                dp[i][j] = dp[i-1][j];
            // when `w[i-1]` is lesser than the current weight `j`
            // `w[i-1]` may or may not be the cause for the answer
            // considering both cases - we need max val from them
            else if (w[i-1] <= j) {
                // max ( excluding, including )
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }

    printf("      ");
    for(j=0; j<=b; ++j)
        printf("%2d ", j);
    printf("\n");
    for(i=0; i<=n; ++i) {
        if(i == 0) printf("%2d %2d ", 0, 0);
        else printf("%2d %2d ", w[i-1], v[i-1]);
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
        int v[n];   s_arr(v, n);
        int w[n];   s_arr(w, n);
        int b;      s_int(b);
        p_int(solve(v, w, n, b));    // print answer

    test_end

    return 0;
}
