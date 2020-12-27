#include <iostream>
using namespace std;
int count = 0;
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
int main()
{
    int arr[] = {1, 6, 7, 20, 3, 5, 8, 11};
    int len = sizeof(arr) / sizeof(int);
    merge(arr, 0, 3, len - 1);

    for (auto it : arr)
        cout << it << " ";

    cout<<endl<<count;
}