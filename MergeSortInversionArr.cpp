#include <iostream>
using namespace std;

int merge(int *arr, int low, int mid, int high)
{
    int static count=0;

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int l[n1], r[n2];

    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        r[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            arr[k++] = l[i++];
        }
        else
        {
            count += n1 - i;

            arr[k++] = r[j++];
        }
    }

    while (i < n1 || j < n2)
    {
        if (i < n1)
        {
            arr[k++] = l[i++];
        }

        else
        {
            arr[k++] = r[j++];
        }
    }
    return count;
}
int countInversion(int arr[], int low, int high)
{   int count;

    if (low < high)
    {
        int mid = (low + high) / 2;
        countInversion(arr, low, mid);
        countInversion(arr, mid + 1, high);
       count=  merge(arr, low, mid, high);
    }

    return count;
}

int main()
{
    int arr[] = {174, 165, 142, 212, 254, 369, 48, 145, 163, 258, 38, 360, 224, 242, 30, 279, 317, 36, 191, 343, 289, 107, 41, 443, 265, 149, 447, 306, 391, 230, 371, 351, 7, 102};
    int len = sizeof(arr) / sizeof(int);
    cout<<countInversion(arr, 0, len - 1)<<endl;

    for (auto it : arr)
        cout << it << "\t";
}