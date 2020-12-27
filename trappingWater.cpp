#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n =sizeof(arr)/sizeof(int);
    int left[n];
    left[0]=arr[0];
    int right[n];
    right[n-1]=arr[n-1];
    for(int i=1;i<n;i++) left[i]=max(left[i-1],arr[i]);
    for(int i=n-2;i>=0;i--) right[i]=max(right[i+1],arr[i]);


    

    int total_water=0,max_;

    for(int i=1;i<n-1;i++)
    {
        max_ = min(left[i],right[i]);
        if(max_ -arr[i]>0)
            total_water+= max_- arr[i];
    }
    
    cout<< total_water;
     
}