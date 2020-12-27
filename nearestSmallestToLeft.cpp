#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 0, 2, 5};
    vector<int> out;
    stack<int> st;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            out.push_back(-1);

        else if (st.top() < arr[i])
            out.push_back(st.top());

        else {
            while(st.size()>0)
            {
                if (st.top()>=arr[i])
                    st.pop();
                else
                    break;                
            }

            if (st.empty())
                out.push_back(-1);

            else
                out.push_back(st.top());
            }

            st.push(arr[i]);
    }

    for(auto it : out)
        cout<<it<<" ";
}