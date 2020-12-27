#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int binary(vector<int> v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    int result = v.size();

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (v[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int row = -1, count=0;
    int maximum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        count = m - binary(arr[i], 1);
        if (count > maximum && count != 0)
        {
            maximum = count;
            row = i;
        }
    }
    return row;
}
int optimised(vector<vector<int>> arr, int n, int m)
{
    // return the row whenever we find 1 in collum wise traversing
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if (arr[i][j]==1)
                return i;
        }
    }
    return -1;
}
 int main()
{
    vector<vector<int>> arr = {{0, 0, 0, 0}};
    // vector<vector<int>> arr = {{0, 1, 1, 1},
    //                            {0, 0, 1, 1},
    //                            {1, 1, 1, 1},
    //                            {0, 0, 0, 0}};

    int n = arr.size();
    int m = arr[0].size();

    cout << rowWithMax1s(arr, n, m);
    // cout<<binary(arr[2],1);
}
