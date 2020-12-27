#include <iostream>
using namespace std;
int main()
{
    int arr[] = {58 ,82 ,124 ,130 ,297};
    int n = sizeof(arr) / sizeof(int);
    int x = 174;
    int low = 0, sum = 0, i = 0;
    int min_ = INT8_MAX;
    while (i <= n)
    {
        if (sum <= x )
            sum += arr[i++];

        else
        {
            min_ = min(min_, i - low);
            sum -= arr[low++];
        }
    }

    if (min_ == INT8_MAX)
        cout << 0 << endl;
    else
        cout << min_ << endl;
}