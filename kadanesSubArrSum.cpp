#include <iostream>
#include <vector>
using namespace std;
// array should contain altleat one positive integer

int forNonNeg(int * arr, int length)
{
    int sum = 0, maxSum = 0;

    for (int i = 0; i < length; i++)
    {
        if (sum + arr[i] > 0)
        {
            sum += arr[i];
        }

        else
        {
            sum = 0;
        }

        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int forAll(int *arr, int length)
{
    int sum = 0, maxSum =INT8_MIN;

    for (int i = 0; i < length; i++)
    {
        sum+= arr[i];

        if(sum<arr[i])
            sum=arr[i];


        if(maxSum<sum)
            maxSum=sum;
    }
    return maxSum;
}


int main()
{

    int arr[] = {-2,-3,-4 , -1};
    int length = sizeof(arr) / sizeof(int);
    

    cout<<forAll(arr,length);


}