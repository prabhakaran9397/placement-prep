#include <stdio.h>
#include <math.h>

void print_bits(n, s)
{
    int i, size=8*sizeof(n);
    for(i=size-1; i>=0; --i) {
        if((n>>i)&1) s=1;
        if(s) printf("%d", (n>>i)&1 );
    }
   putchar('\n'); 
}

int main(void)
{
    int i, n = 100;

    print_bits(n, 1);

    return 0;
}
