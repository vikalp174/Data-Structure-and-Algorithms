// count pair with given sum

#include <iostream>
#include<unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 1,1,1};
    int n= sizeof(arr)/sizeof(int);
    int k=2, count =0;

    unordered_map <int, int> mp;

    for(int i=0;i<n; i++)
    {
        int x= k-arr[i];

        if(mp[x]==0)
        {
            mp[arr[i]]++ ;
        }

        else
        {
            count+= mp[x];
            mp[arr[i]]++;
        }
        
    }

    cout<<count;
    
}