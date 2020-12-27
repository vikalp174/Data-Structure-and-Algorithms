#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bruteforce(int *arr, int N)
{
    sort(arr, arr + N);

    cout << endl;
    int count = 1, maxSF = 1;
    int x = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (x != arr[i])
        {
            if (x + 1 == arr[i])
            {
                count++;
                maxSF = max(count, maxSF);
            }
            else
                count = 1;

            x = arr[i];
        }
    }

    return maxSF;
}

int optimised(int * arr,int N)
{
    set<int> st;
    for(int i=0;i<N;i++)
        st.insert(arr[i]);
    int c=0;
    int maxC=0;
    for(int i=0;i<N;i++)
    {
        if(st.find(arr[i]-1)==st.end())
        {
            c=0;
            int j=arr[i];
            while(st.find(j)!=st.end())
            {
                c++;
                j++;
            }
            maxC= max(c,maxC);
        }
    }
    return maxC;
    
}
int main()
{
    int arr[] = {2, 6, 1, 9, 4, 5, 3};
    int N = sizeof(arr) / sizeof(int);
    cout<<optimised(arr,N);
}