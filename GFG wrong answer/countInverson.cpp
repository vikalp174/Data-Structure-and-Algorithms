#include<iostream>
using namespace std;


int merge(long long *arr, long long low, long long mid, long long high)
{
    int static count = 0;

    long long n1 = mid - low + 1;
    long long n2 = high - mid;

    long long l[n1], r[n2];

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

int countInversion(long long arr[], long long low, long long high)
{
    int count;

    if (low < high)
    {
        int mid = (low + high) / 2;
        countInversion(arr, low, mid);
        countInversion(arr, mid + 1, high);
        count = merge(arr, low, mid, high);
    }

    return count;
}
long long int inversionCount(long long arr[], long long N)
{
    return countInversion(arr, 0, N - 1);
}


int main()
{
    long long int arr[] = {174, 165, 142, 212, 254, 369, 48, 145, 163, 258, 38, 360, 224, 242, 30, 279, 317, 36, 191, 343, 289, 107, 41, 443, 265, 149, 447, 306, 391, 230, 371, 351, 7, 102};
    long long int N = sizeof(arr)/sizeof(arr[0]);
    cout<<inversionCount(arr,N);
}