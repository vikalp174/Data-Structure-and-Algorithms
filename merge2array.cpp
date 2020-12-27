#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> m1 = {1, 2, 3,30};
    vector<int> m2 = {4, 5, 6,33};
    vector<int> m3;
    int i = 0, j = 0;

    while (i < m1.size() && j < m2.size())
    {
        if (m1[i] < m2[j])
        {
            m3.push_back(m1[i]);
            i++;
        }
        else
        {
            m3.push_back(m2[j]);
            j++;
        }
    }

    // while (i < m1.size() || j < m2.size())

    while (m1.size() + m2.size() >m3.size())
    {
        if (i < m1.size())
        {
            m3.push_back(m1[i]);
            i++;
        }
        else
        {
            m3.push_back(m2[j]);
            j++;
        }

    }

    for (auto it : m3)
        cout << it << " ";
}