#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int partition(int *arr, int s, int e)
{

    int pivit = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivit)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}
void quickSort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[] = {7, 2, 1, 8, 6, 3, 5, 4, 15};
    int length = sizeof(arr) / sizeof(arr[0]);
    int k;
    quickSort(arr, 0, length - 1);

   cout<<"enter the term\n";
   cin>> k;
   cout<<k<<" largest term is "<<arr[length-k];
}