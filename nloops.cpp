#include <stdio.h>
#include <string.h>
int main(void)
{
    int temp[5], i;
    memset(temp, 2, sizeof temp);
    for(i=0; i<5; ++i) {
        printf("%d\n", temp[i]);
    }
    return 0;
}
