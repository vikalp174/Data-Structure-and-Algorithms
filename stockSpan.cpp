#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> stock = {100, 80, 60, 70, 60, 75, 85};
    // vector<int> stock = {10,20,30,40,50};
    vector<int> out;
    stack<int> val;
    stack<int> index;

    int n = stock.size();

    for (int i = 0; i < n; i++)
    {
        if (val.empty())
            out.push_back(-1);

        else if (val.top() > stock[i])
            out.push_back(index.top());

        else
        {
            while (!val.empty())
            {
                if (val.top() < stock[i])
                {
                    val.pop();
                    index.pop();
                }

                else
                    break;
            }
            if (val.empty())
                out.push_back(-1);

            else if (val.top() > stock[i])
                out.push_back(index.top());
        }

        val.push(stock[i]);
        index.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        out[i] = i - out[i];
    }

    for (auto it : out)
        cout << it << " ";
}