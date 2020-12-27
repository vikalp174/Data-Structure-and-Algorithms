// All possible sub array sum brutforce 
#include <iostream>
#include <vector>
using namespace std;


int BruteforceMethord (int *arr, int length )
{
    // O(n^3) time complexity
    int max = INT_LEAST32_MIN;

    for (int sub_array_size = 1; sub_array_size <= length; ++sub_array_size)
    {
        for (int start_index = 0; start_index < length; ++start_index)
        {
            if (start_index + sub_array_size > length)
                break;
            int sum = 0;
            for (int i = start_index; i < start_index + sub_array_size; i++)
            {
                sum += arr[i];
            }

            if (sum > max)
                max = sum;
        }
    }

    return max;
}

int main()
{
    int arr[] = {-1 ,- 2, - 3, - 4};
    int length = sizeof(arr)/sizeof(int);

    cout<<"max sum = "<<BruteforceMethord(arr,length);
}