#include <stdio.h>

int main()
{
    int T, X, c;

    scanf("%d", &T);
    while(T--) {
        c = 0;
        scanf("%d", &X);
        for(; X; X=X>>1)
            c = c + !(X&1);
        printf("%d\n", (1 << c) - 1);
    }
}
