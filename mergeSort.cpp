#include <iostream>
using namespace std;

void merge(int *arr, int low, int mid, int high)
{

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
        if (l[i] < r[j])
        {
            arr[k++] = l[i++];
        }
        else
        {
            // // if(i<mid)
            // //     count+= j-i;
            // // else
            // //     count++;

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
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}



int main()
{
    int arr[] = {1, 20, 6, 7, 5, 8, 11, 3};
    int siz = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, siz - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}