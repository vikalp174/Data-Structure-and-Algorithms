#include <iostream>
using namespace std;
#include <vector>
int arz[3];

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int *countThearray(int arr[], int length)
{

    int zeroes = 0, ones = 0, twoes = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 0)
            zeroes++;

        if (arr[i] == 1)
            ones++;

        if (arr[i] == 2)
            twoes++;
    }

    arz[0] = zeroes;
    arz[1] = ones;
    arz[2] = twoes;

    return arz;
}

void optimalSolution(int *arr, int low, int mid, int high)
{

    while (mid < high)
    {

        if (arr[mid] == 1)
            mid++;

        if (arr[mid] == 0)
        {
            if(mid!= low)
                swap(arr[mid], arr[low]);
            low++;
            mid++;
        }

        if (arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;

        }
    }

    
}

int main()
{

    int arr[] = {0, 1, 2, 1, 1,0,1,2,1,2,1,2,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    optimalSolution(arr, 0,0,length-1);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }




    // int *p;
    // p = countThearray(arr, length);

    // vector<int> ar;
    // for (int i = 0; i < p[0]; i++)
    // {
    //     ar.push_back(0);
    // }

    // for (int i = 0; i < p[1]; i++)
    // {
    //     ar.push_back(1);
    // }

    // for (int i = 0; i < p[2]; i++)
    // {
    //     ar.push_back(2);
    // }

    // for (int i = 0; i < ar.size(); i++)
    // {
    //     cout << ar[i] << "\t";
    // }
}