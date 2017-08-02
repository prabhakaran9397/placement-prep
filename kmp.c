#include <stdio.h>
#define SIZE 100

int kmp(char *text, char *pattern)
{
    int pat_len = strlen(pattern);
    char lps[pat_len];
    int i, j;
    for(j=0, i=1; i<pat_len;) {
        if(pattern[j] == pattern[i])
            lps[i++] = ++j;
        else {
            if(j != 0)
                j = lps[j-1];
            else
                lps[i++] = 0;
        }
    }
    int txt_len = strlen(text);
    for(i=j=0; i<txt_len;) {
        if(pattern[j] == text[i]) {
            i++; j++;
        }
        if(j == pat_len) {
            return j;
        } else if(i<txt_len && pattern[j] == text[i]) {
            if(j != 0)
                j = lps[j-1];
            else
                i++;
        }
    }
    return -1;
}

int main(void)
{
    char text[SIZE], pattern[SIZE];
    scanf("%s%s", text, pattern);
    int index = kmp(text, pattern);
    printf("%d\n", index);
    return 0;
}
