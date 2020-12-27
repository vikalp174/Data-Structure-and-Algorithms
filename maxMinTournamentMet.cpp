// finding maximum and minimum element of an array using tournament methord

#include <iostream>
using namespace std;

struct Pair
{
    int max, min;
};

struct Pair maxMinTournamentMet(int arr[], int low, int high)
{
    struct Pair p1, mmL, mmR;
    if (low == high)
    {
        p1.min = arr[low];
        p1.max = arr[low];

        return p1;
    }

    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            p1.max = arr[low];
            p1.min = arr[high];
        }

        else
        {
            p1.max = arr[high];
            p1.min = arr[low];
        }

        return p1;
    }

    int mid = (high + low) / 2;
    mmL = maxMinTournamentMet(arr, low, mid);
    mmR = maxMinTournamentMet(arr, mid + 1, high);

    if (mmL.min < mmR.min)
    {
        p1.min = mmL.min;
    }
    else
    {
        p1.min = mmR.min;
    }

    if (mmL.max < mmR.max)
    {
        p1.max = mmR.max;
    }
    else
    {
        p1.max = mmL.max;
    }

    return p1;
}

int main()
{
    struct Pair p1;

    int arr[] = {7, 54, 89, 1, 2, 5, 6, 2, 45, 2, 56, 2, 6, 5, 3, 6, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    p1 = maxMinTournamentMet(arr, 0, length - 1);

    cout << "smalest no. is\t" << p1.min << endl;
    cout << "largest no.\t" << p1.max;
}