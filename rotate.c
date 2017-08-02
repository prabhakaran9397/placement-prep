#include <stdio.h>

void print(int *a, int n)
{
    int i;
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);
    putchar(10);
}

void print_rotate(int a[], int n, int d)
{
    int i;
    for(i=0; i<n; ++i)
        printf("%d ", a[(i+d)%n]);
    putchar(10);
}

void rotate(int *a, int n, int d)
{
    int first=a[0], i=0, index;

    while(1) {
        index = (i+d)%n;
        if(!index) {
            a[i] = first;
            break;
        }
        a[i] = a[index];
        i = index;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n], i;
    for(i=0; i<n; ++i)
        scanf("%d", &a[i]);

    int d;
    scanf("%d", &d);

    print_rotate(a, n, d);
    //rotate(a, n, d);
    //print(a, n);

    return 0;
}
