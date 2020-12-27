#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {13, 7, 6, 12};
    vector<int> output;
    stack<int> st;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
        {
            output.push_back(-1);
        }

            else if (st.top() > arr[i])
            {
                output.push_back(st.top());
            }

            else
            {
                while (st.size() > 0)
                {
                    if (st.top() <= arr[i])
                        st.pop();
                    else
                    {
                        break;
                    }
                }

                if (st.size() == 0)
                {
                    output.push_back(-1);
                }

                else
                {
                    output.push_back(st.top());
                }
            }

        st.push(arr[i]);
    }
    reverse(output.begin(), output.end());
    for (auto it : output)
        cout << it << " ";
}