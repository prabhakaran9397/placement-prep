#include <stdio.h>

int main(void) {
    long long int a,b;
    scanf("%lld%lld",&a,&b);

    long long int i;
    long long int ta,tb,ans;
    ans=0;
    for(ta=1,tb=3;ta<=a;ta++,tb+=2){
        long long int temp=0;
        for(i=0;temp<=b;i++){
            temp=temp+(i*2)+tb;
            if(temp<=b)
                ans++;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
