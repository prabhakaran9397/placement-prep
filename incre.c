#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* A, int n1, int *length_of_array)
{
    int i, *r;
    for(i=0; i<n1/2; i++)
    {
        int t = A[i];
        A[i] = A[n1-i-1];
        A[n1-i-1] = t;
    }
    for(i=n1-1; i>=0 && n1!=1; i--)
    {
        if(A[i]==0)
            n1--;
        else
            break;
    }
    int nine = 1;
    for(i=0; i<n1 && nine==1; i++)
        if(A[i]!=9)
            nine=0;
    if(nine == 1)
    {
        *length_of_array = n1+1;   
        int *r = (int *) malloc(*length_of_array * sizeof(int));
        for(i=0; i<*length_of_array; i++)
            r[i] = 0;
        r[0] = 1;
        return r;
    }
    else
    {
        *length_of_array = n1;   
        int *r = (int*) malloc(*length_of_array * sizeof(int));
        int b=1;
        for(i=0; i<*length_of_array; i++)
        {
            r[*length_of_array-i-1] = A[i] + b;
            if(r[*length_of_array-i-1] > 9)
                b = 1;
            else
                b = 0;
        }
        return r;
    }
}

int main(void)
{
    int A[] = {0};
    int n = 1;
    int m, i;
    int *res = plusOne(A, n, &m);
    for(i=0; i<m; i++)
        printf("%d  ", res[i]);
    printf("\n");
    return 0;
}
