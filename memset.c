#include <stdio.h>
#include <string.h>

int main(void)
{
    int A[5];
    int n, i;
    scanf("%d", &n);
    memset(A, n, sizeof A);
    for(i=0; i<5; ++i)
        printf("%d\n", A[i]);
}
