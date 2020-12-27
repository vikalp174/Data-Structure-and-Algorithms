#include <iostream>
using namespace std;
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
int main()
{
    int arr[] = {3, 9},

        brr[] = {10, 27, 38, 43, 82};

    int lena = sizeof(arr) / sizeof(int);
    int last_element_index_arr = lena - 1;
    int lenb = sizeof(brr) / sizeof(int);
    int j;

    int gap = lena + lenb;

    while (gap > 0)
    {
        gap = nextGap(gap);

        for (int i = 0; i < lena; i++)
        {

            if (i + gap < lena)
            {
                if (arr[i] > arr[i + gap])
                    swap(arr[i], arr[i + gap]);
            }
            if (i + gap < lenb)
            {
                if (brr[i] > brr[i + gap])
                    swap(brr[i], brr[i + gap]);
            }

            if (i + gap >= lena)
            {
                j = gap - last_element_index_arr + i - 1;

                // cout << "j=" << j << " gap ==" << gap << endl;
                if (j < lenb)
                {

                    if (arr[i] > brr[j])
                    {
                        swap(arr[i], brr[j]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < lena; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < lenb; i++)
    {
        cout << brr[i] << "\t";
    }
}