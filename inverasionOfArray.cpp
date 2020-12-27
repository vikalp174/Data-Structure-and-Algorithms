// bruteForce methord
#include <iostream>
#include <algorithm>
using namespace std;

int bruteForce(int* arr, int len)
{
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {

            if (arr[i] > arr[j])
                count++;
        }
    }

    return count;
}
int main()
{
    int arr[] = {174 ,165 ,142 ,212 ,254 ,369 ,48 ,145 ,163 ,258 ,38 ,360, 224, 242, 30, 279, 317, 36, 191, 343, 289, 107, 41, 443, 265, 149, 447 ,306 ,391 ,230 ,371 ,351 ,7 ,102};
    int len = sizeof(arr) / sizeof(int);
    cout<<bruteForce(arr,len);
    
}