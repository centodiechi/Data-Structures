#ifndef MERGE_SORT_H
#define MERGE_SORT_H

template <typename T>
void merge(T a[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    T a1[n1], a2[n2];
    for (int i = 0; i < n1; i++)
    {
        a1[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = a[mid + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            a[k++] = a1[i++];
        }
        else
        {
            a[k++] = a2[j++];
        }
    }

    while (i < n1)
    {
        a[k++] = a1[i++];
    }
    while (j < n2)
    {
        a[k++] = a2[j++];
    }
}

namespace sorting
{
    template <typename T>
    void mergeSort(T a[], int l, int r)
    {
        if (l >= r)
        {
            return;
        }
        int mid = l + (r - l) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

#endif