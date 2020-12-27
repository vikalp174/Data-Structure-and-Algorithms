// Minimum swaps and K together
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[] = {2, 1, 5, 6, 3};
    int n = sizeof(array) / sizeof(int);
    int a = 3;
    int min_ = INT8_MAX;
    int count = 0;
    int left = 0, right = 0;
    int add = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
        if (array[i] <= a)
            num++;

    while (right < n)
    {
        if (add < num)
        {
            if (array[right++] > a)
                count++;
            add++;
        }

        else
        {
            min_ = min(min_, count);
            if (array[left++] > a)
                count--;
            add--;
        }
    }

    cout << min_;
}