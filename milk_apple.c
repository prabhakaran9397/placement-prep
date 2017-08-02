#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int milk[n];
	int apple[n];
	int i;
	for(i=0; i<n; ++i) {
		scanf("%d", &milk[i]);
	}
	for(i=0; i<n; ++i) {
		scanf("%d", &apple[i]);
	}

	return 0;
}
