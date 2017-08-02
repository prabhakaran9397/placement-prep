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

int arranged(int a[], int n)
{
    int i;
    for(i=2; i<n; i+=2)
        if(a[i-2] < a[i])
            return i-2;
    return -1;
}

int ind(int i, int n)
{
    if(i&1)
        return i/2;
    else
        return (i - (3*(i/2)+1) + n ) % n;
}

void min_max_form(int a[], int n)
{
    if(n == 2) {
        swap(&a[0], &a[1]);
        return;
    }
    int s, first, i, j;
    while((s = arranged(a, n)) != -1) {
        first = a[s];
        i = s;
        while(1) {
            j = ind(i, n);
            if(j==s) {
                a[i] = first;
                break;
            }
            a[i] = a[j];
            i = j;
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n], i;
    for(i=0; i<n; ++i)
        a[i] = i+1;

    min_max_form(a, n);
    print(a, n);

    return 0;
}
