#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

namespace sorting
{
    template <typename T>
    void selectionSort(T a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int minIdx = i;
            for (int j = minIdx + 1; j < n; j++)
            {
                if (a[minIdx] > a[j])
                {
                    minIdx = j;
                }
            }
            if (minIdx != i)
            {
                std::swap(a[minIdx], a[i]);
            }
        }
    }
}

#endif