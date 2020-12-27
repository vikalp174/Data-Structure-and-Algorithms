#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int median(vector<vector<int>> &matrix, int r, int c)
{
    int max_val = INT8_MIN, min_val = INT8_MAX;
    int target = (r * c + 1) / 2;
    // finding maximum and minimum element in the matriz
    for (int i = 0; i < r; i++)
    {
        max_val = max(max_val, matrix[i][c - 1]);
        min_val = min(min_val, matrix[i][0]);
    }
    while (max_val > min_val)
    {
        int mid = (max_val + min_val) / 2;
        int count = 0;
        for (int i = 0; i < r; i++)
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();

        if (count < target)
            min_val = mid + 1;
        else
        {
            max_val = mid;
        }
    }
    return min_val;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5},
                                  {2, 6, 9},
                                  {3, 6, 9}};
    int r = matrix.size();
    int c = matrix[0].size();

    cout << median(matrix, r, c);
}