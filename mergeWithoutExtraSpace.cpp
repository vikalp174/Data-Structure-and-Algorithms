#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange(int * arr,int n)
{
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]<arr[i+1])
            return ;
        else
            swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int arr1[] = {2,3,9},
        arr2[] = {1,4,7,8,10};

    int N = sizeof(arr1) / sizeof(int), M = sizeof(arr2) / sizeof(int);

    for (int i = 0; i < N;i++)
    {
        if (arr1[i] > arr2[0])
        {
        
            swap(arr1[i], arr2[0]);

            rearrange(arr2, M);
        }
    }
    rearrange(arr2, M);

    for (int i = 0; i < N; i++)
        cout << arr1[i] << "\t";
    cout<<endl;

    for (int i = 0; i < M; i++)
    cout<<arr2[i]<<"\t";
}
