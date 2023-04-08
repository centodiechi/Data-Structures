#include<iostream>
using namespace std;

void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0&&a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
        }

    }
}

int main()
{
    int a[] = {9,2,1,6,7,10,2,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    InsertionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}