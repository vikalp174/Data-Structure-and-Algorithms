#include <iostream>
using namespace std;

int main()
{
    long long arr[] = {3, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        arr[i] += arr[arr[i] ]%n * n;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / n;
    }

    for (auto it : arr)
        cout << it << " ";
}
