#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void usingUordered_map(int *, int, int);
void usingVotingConcept(int *, int, int);

int main()
{
    int arr[] = {1,1,1,3,3,2,2,2};
    int brr[] = {3, 1, 2, 2, 2, 1, 4, 3, 3};
    int n = sizeof(arr) / sizeof(int);
    int k = 4;

    usingVotingConcept(arr,n,k);
    // usingVotingConcept(brr, 3, 3);
}

void usingUordered_map(int *arr, int n, int k)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] > n / k)
            cout << arr[i] << " ";
    }
}

struct count
{
    int e;
    int c;
};

void usingVotingConcept(int *arr, int n, int k)
{
    
    struct count temp[k-1]= {0};

    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<k-1;j++)
        {
            if(temp[j].c==0)
            {
                temp[j].e= arr[i];
                temp[j].c =1;
                break;
            }

           else if (temp[j].e ==arr[i])
           {
               temp[j].c++;
               break;
           }
                
        }

        if(j==k-1)
        {
            for(int neg=0;neg<k-1;neg++)
            {
               temp[neg].c--;
            }
               
        }
    }

    for (auto it : temp)
    {
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==it.e)
                count++;
        }

        if(count>n/k)
            cout<<it.e<<" ";
            
            
    }

}