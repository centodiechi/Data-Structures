#ifndef SORT_H
#define SORT_H

namespace sorting
{

    template <typename T>
    void bubbleSort(T a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    std::swap(a[j], a[j + 1]);
                }
            }
        }
    }
}

#endif
