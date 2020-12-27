#include<iostream>
using namespace std;

void negSort (int * arr, int low, int high)
{
    while(high>low)
    {
        if(arr[low]<0)
        {
            low++;
        }

        else
        {
            swap (arr[low],arr[high]);
            high--;
        }
        
    }



}

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int length = sizeof(arr) / sizeof(arr[0]);
    negSort(arr, 0,  length - 1);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
}