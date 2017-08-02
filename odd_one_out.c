#include <stdio.h>
#define s(n) scanf("%d", &n)
#define p(n) printf("%d\n", n)

int oddoneout(int a[], int n, int d)
{
    int size = sizeof(a[0]), i, j, c;
    int oddone = 0;
    for(i=0; i<4*size; ++i) {
        for(c=j=0; j<n; ++j) 
            c += (a[j] >> i)&1;
        c %= d;
        oddone |= (1 << i)*c;
    }
    return oddone;
}

int main(void)
{
    int n;
    s(n);

    int a[n], i;
    for(i=0; i<n; ++i)
        s(a[i]);

    p(oddoneout(a, n, 2));
    return 0;
}
