#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {3, 9, 12, 16, 20};
    int length = sizeof(arr) / sizeof(int);
    int n=3;
    int minimum;

    int add,sub;

    sort(arr, arr+length);

    int max_l = arr[length-1]+n;
    int min_l = arr[length-1]-n;

    for(int i=0;i<length-1;i++)
    {
        add= arr[i]+n;
        sub= arr[i]-n;

        

    }

    
}