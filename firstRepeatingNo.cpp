#include <iostream>
#include <set>
using namespace std;

int firstRepeat(int *arr, int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.find(arr[i]) != st.end())
            return arr[i];

        else
            st.insert(arr[i]);
    }

    return -1;
}

int main()
{

    int arr[] = {4, 7, 6, 1, 2, 3, 14};
    int sizz = sizeof(arr) / sizeof(int);

    cout << firstRepeat(arr, sizz);
}