#include <iostream>
using namespace std;
long long BruteForce(int *arr, int n)
{
    long long prod;
    long long max = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        prod = 1;
        for (int j = i; j < n; j++)
        {
            prod *= arr[j];
            if (max < prod)
            {
                max = prod;
            }
        }
    }
    return max;
}
long long  Optiised(int *arr, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];

    long long prod = 1, maxprod = 0;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
        maxprod = max(prod, maxprod);
        if (prod == 0)
            prod = 1;
    }
    prod = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        prod *= arr[i];
        maxprod = max(prod, maxprod);
        if (prod == 0)
            prod = 1;
    }

    return maxprod;
}
int main()
{
    int arr[] = {90 ,91, - 91, 91, - 91, - 90, 90, 90, - 90, - 90};
    int n = sizeof(arr) / sizeof(int);

    cout << "bruteforce = " << BruteForce(arr, n) << endl;
    cout << "optimised = " << Optiised(arr, n);
}
