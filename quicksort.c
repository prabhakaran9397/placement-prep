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

void quicksort(int a[], int s, int e)
{
    if(s<e) {
        int p = partition(a, s, e);
        quicksort(a, s, p-1);
        quicksort(a, p+1, e);
    }
}

int partition(int a[], int s, int e)
{
    int i, j;
    for(i=s-1, j=s; j<e; ++j)
        if(a[j] <= a[e])
            swap(&a[++i], &a[j]);
    swap(&a[++i], &a[e]);
    return i;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n], i;
    for(i=0; i<n; ++i)
        scanf("%d", &a[i]);

    quicksort(a, 0, n-1);
    print(a, n);

    return 0;
}
