#include <stdio.h>

int main(void) {
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int count =0;
    long long int even=2;
    long long int odd=3;
    long long int l, n;
    for(l=1; odd<=b; odd+=2*l+3, even+=2, ++l) {
        n = (b-odd)/even+1;
        count += n > a ? a : n;
    }
    printf("%lld\n", count);
    return 0;
}
