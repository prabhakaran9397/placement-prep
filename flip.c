#include<stdio.h>
int calc(char* A, int s, int e)
{
    int n = strlen(A), i, v=0;
    for(i=0; i<n; i++)
    {
        if(i>=s && i<=e)
            if(A[i]=='0')
                v++;
        else
            if(A[i]=='1')
                v++;
    }
    return v;
}
int max(int a, int b)
{
    return a>b?a:b;
}
int* flip(char* A, int *len1)
{
    int i, j;
    int n = strlen(A), m=0;
    int *result =(int*)malloc(2*sizeof(int));
    int **store =(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
    {
        store[i]=(int*)malloc(n*sizeof(int));
        for(j=0; j<n; j++)
            store[i][j]=0;
    }   
    for(i=1; i<=n; i++)
        for(j=i; j<=n; j++)
        {
            store[i-1][j-1]=calc(A, i-1, j-1);
            m = max(m, store[i-1][j-1]);
        }
    for(i=1; i<=n; i++)
        for(j=i; j<=n; j++)
            if(m == store[i-1][j-1])
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
}
int main(int argc, char const *argv[])
{
    int* r = flip();
    return 0;
}