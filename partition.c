#include <stdio.h>

void print(int *a, int n)
{
    int i;
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar(10);
}

int swap(int *a, int *b)
{
    int t = *a; *a = *b; *b = t;
}

int partition(int a[], int s, int e)
{
    int i, j;
    for(i=s-1, j=s; j<e; ++j)
        if(a[j] <= 0)
            swap(&a[++i], &a[j]);
    return i+1;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n], i;
    for(i=0; i<n; ++i)
        scanf("%d", &a[i]);

    int l, h;
    scanf("%d%d", &l, &h);

    partition(a, 0, n-1);
    print(a, n);

    return 0;
}
