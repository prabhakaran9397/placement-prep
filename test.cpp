#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    multimap<int, int> m;
    int k,c,x,j;
    for(int i=0; i<n; i++)
    {
        c=0;
        x=arr[i];
        for(j=0; j<n; j++)
        {
            if(arr[j]==x)
            {
                c++;
            }
        }
        m.insert(make_pair(c,x));
    }
    int i = 0;
    multimap<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        arr[i++] = (*it).first;
}

// Function to print the array
void printArray(int arr[] , int n)
{
    for (int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
}

// Driver code
int main()
{
    int arr[] =  {2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}

