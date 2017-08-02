#include <stdio.h>

long long compute(int drops, int eggs, int floors)
{
    int i;
    long long ans = 0;
    double t = 1;
    for(i=1; ans<=floors && i<=eggs; ++i, ans+=t)
        t *= (drops + 1.0 - i) / (1.0 * i);
    return ans;
}

int main(void)
{
    int floors, eggs;
    scanf("%d%d", &floors, &eggs);

    long long m, s=0, e=floors;
    while(e-s>1) {
        m = (s+e)/2;
        if(compute(m, eggs, floors)<floors) s = m;
        else e = m;
    }
    printf("%lld\n", s+1);
}
