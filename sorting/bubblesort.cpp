#include<iostream>
using namespace std;

void BubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
}

int main()
{
    int a[] = {9,2,1,6,7,10,2,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    BubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}