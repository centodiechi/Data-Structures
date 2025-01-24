#include <iostream>
#include<algorithm>
#include "searching/search.h"
using namespace std;

template <typename T>
void Print(T *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

template <typename T>
void Reset(T dest[], const T src[], int size)
{
    std::copy(src, src + size, dest);
}

int main()
{
    int Tarr[] = {34, -2, 0, 5, 23, -15, 34, 89, 2, -7, 18, 34, 7, -20, 42};
    int n = sizeof(Tarr) / sizeof(Tarr[0]);
    int arr[n];

    cout << "Original Array" << endl;
    Print(Tarr, n);
    Reset(arr,Tarr,n);
    int key = 23;
    int lfound = searching::linear_search<int>(arr, arr+n, key);
    cout << "Linear Search " << key << " : " << lfound << endl;
    
    sort(arr,arr+n);
    Print(arr,n);
    int bfound = searching::binary_search<int>(arr, arr+n, key);
    cout << "Binary Search " << key << " : " << bfound << endl;

    return 0;
}
