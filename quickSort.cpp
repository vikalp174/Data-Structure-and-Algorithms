#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int partition(int *arr, int start, int end)
{

    int pivit = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivit)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}
void quickSort(int arr[], int start, int end)
{

    if (start >= end)
    {
        return ;
    }

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[] = {7, 2, 1, 8, 6, 3, 5, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, length - 1);

    for (int i = 0; i < length; i++)
        cout << arr[i] << "\t";
}