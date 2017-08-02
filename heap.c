#include <stdio.h>

int swap(int *a, int *b)
{
        int t = *a; *a = *b; *b = t;
}

void print(int a[], int n)
{
    int i;
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar(10);
}

void heapify(int a[], int n, int i)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int larg = i;
    if(l<n && a[l] > a[larg])
        larg = l;
    if(r<n && a[r] > a[larg])
        larg = r;
    if(larg != i) {
        swap(&a[i], &a[larg]);
        heapify(a, n, larg);
    }
}

void build_heap(int a[], int n)
{
    int i;
    for(i=n/2-1; i>=0; --i)
        heapify(a, n, i);
}

void heapsort(int a[], int n)
{
    build_heap(a, n);
    int i;
    for(i=n-1; i>0; --i) {
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
}

int main(void)
{
    int a[] = {1, 4, 2, 7, 7, 4, 8};
    int n = sizeof(a)/sizeof(a[0]);
    
    heapsort(a, n);
    print(a, n);

    return 0;
}
