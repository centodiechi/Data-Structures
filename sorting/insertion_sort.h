#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

namespace sorting
{
    template <typename T>
    void insertionSort(T a[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            T key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > key)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    }
}

#endif