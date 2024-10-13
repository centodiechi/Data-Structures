#ifndef LINEAR_SEARCH
#define LINEAR_SEARCH
namespace searching
{
    template <typename T>
    int linearSearch(T a[], int n, int key)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
}
#endif