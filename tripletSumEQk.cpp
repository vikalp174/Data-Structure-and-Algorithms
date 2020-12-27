#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool twoSum(int *arr, int n, int x, int s)
{
    int e = n - 1;
    while (s < e)
    {
        if (arr[s] + arr[e] < x)
            s++;
        else if (arr[s] + arr[e] > x)
            e--;
        else
            return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(int);
    int k = 22, flg = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        if (twoSum(arr, n, k - arr[i], i + 1))
        {
            flg = 1;
            break;
        }
    }
    cout << flg;
}