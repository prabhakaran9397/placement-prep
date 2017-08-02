#include <stdio.h>
#include <string.h>
#define INT_MAX 9999999

int get_min(int *a)
{
    int mini = INT_MAX, i;
    for(i=1; i<26; ++i) {
        if(a[i] > 0) {
            if(a[i] < mini) {
                mini = a[i];
            }
        }
    }
}

int main(void)
{
	int t;
	scanf("%d", &t);
	
	int n, c, f;
	char x, xs[1000];
	int chars[26];
	
	while(t--) {
	    memset(chars, -1, sizeof chars);
	    scanf("%d", &n);
	    getchar();
	    for(c=0; c<n; ++c) {
	        x = getchar(); getchar();
	        xs[c] = x;
	    }
	    for(c=0; c<n; ++c) {
	        x = xs[c];
	        if(chars[x-'a'] == -1) {
	            chars[x-'a'] = c;
	        } else if(chars[x-'0'] > -1) {
	            chars[x-'a'] = -99;
	        }
	        f = get_min(chars);
	        if(f == INT_MAX) printf("-1 ");
	        else printf("%c ", xs[f]);
	    }
	    printf("\n");
	}
	return 0;
}
