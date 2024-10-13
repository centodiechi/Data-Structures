#ifndef BINARY_SEARCH
#define BINARY_SEARCH
namespace searching
{
    template <typename T>
    int binarySearch(T a[], int n, int key)
    {
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (a[m] == key)
            {
                return m;
            }
            else if (a[m] > key)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
}
#endif