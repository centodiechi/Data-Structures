#include<iostream>
using namespace std;

void SelectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min]) min=j;
        }
        swap(a[i],a[min]);
    }
}

int main()
{
    int a[] = {9,2,1,6,7,10,2,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    SelectionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}