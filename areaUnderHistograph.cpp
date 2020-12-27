#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long getMaxArea(long long arr[], int n)
{

    stack<pair<int, int>> indx;
    return 0;
}

int main()
{
    long long arr[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<pair<int, int>> st;
    vector<int> nsr;

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.empty())
            nsr.push_back(n);

        else if (st.top().first < arr[i])
            nsr.push_back(st.top().second);

        else
        {
            while (!st.empty())
            {
                if (st.top().first > arr[i])
                    st.pop();
                else
                    break;
            }

            if (st.empty())
                nsr.push_back(n);

            else if (st.top().first < arr[i])
                nsr.push_back(st.top().second);
        }

        st.push({arr[i], i});
    }
    reverse(nsr.begin(), nsr.end());

    for (auto it : nsr)
        cout << it << " ";
}