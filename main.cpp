#include <iostream>
#include "sorting/bubble_sort.h"
#include "sorting/insertion_sort.h"
#include "sorting/selection_sort.h"
#include "sorting/merge_sort.h"
#include "sorting/quick_sort.h"
#include "searching/linear_search.h"
#include "searching/binary_search.h"
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

    Reset<int>(arr, Tarr, n);
    sorting::bubbleSort<int>(arr, n);
    cout << "Bubble Sort" << endl;
    Print(arr, n);

    Reset<int>(arr, Tarr, n);
    sorting::insertionSort<int>(arr, n);
    cout << "Insertion Sort" << endl;
    Print(arr, n);

    Reset<int>(arr, Tarr, n);
    sorting::selectionSort<int>(arr, n);
    cout << "Selection Sort" << endl;
    Print(arr, n);

    Reset<int>(arr, Tarr, n);
    sorting::mergeSort<int>(arr, 0, n - 1);
    cout << "Merge Sort" << endl;
    Print(arr, n);

    Reset<int>(arr, Tarr, n);
    sorting::quickSort<int>(arr, 0, n - 1);
    cout << "Quick Sort" << endl;
    Print(arr, n);

    int key = -2;
    int bfound = searching::binarySearch<int>(arr, n, key);
    cout << "Binary Search " << key << " : " << bfound << endl;

    Reset<int>(arr, Tarr, n);
    int lfound = searching::linearSearch<int>(arr, n, key);
    cout << "Linear Search " << key << " : " << lfound << endl;

    return 0;
}
