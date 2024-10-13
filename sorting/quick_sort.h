#ifndef QUICK_SORT_H
#define QUICK_SORT_H

template <typename T>
int divide(T a[], int l, int r)
{
    T pivot = a[r];
    int j = l;
    for (int i = l; i < r; i++)
    {
        if (a[i] <= pivot)
        {
            std::swap(a[j++], a[i]);
        }
    }
    std::swap(a[j], a[r]);
    return j;
}

namespace sorting
{
    template <typename T>
    void quickSort(T a[], int l, int r)
    {
        if (l >= r)
        {
            return;
        }
        int pi = divide(a, l, r);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, r);
    }
}

#endif