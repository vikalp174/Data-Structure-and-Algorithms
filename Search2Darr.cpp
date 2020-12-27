#include <iostream>
#include <vector>
using namespace std;
int binary(vector<vector<int>> &mat, int target)
{
    int row = mat.size();
    int col = mat[0].size();

    int lft = 0;
    int rig = row * col - 1;

    while (lft <= rig)
    {
        int mid = (lft + rig) / 2;
        int mid_ele = mat[mid / col][mid % col];
        if(mid_ele==target)
            return 1;

        else if (mid_ele > target)
            rig = mid-1;
        else
        {
            lft = mid+1;
        }
    }
    return 0;
}

int matSearch(vector<vector<int>> &mat, int target)
{
    if (mat.size() == 0)
        return false;

    int n = mat.size();

    int i = 0;
    int j = mat[0].size() - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == target)
            return true;
        else if (mat[i][j] < target)
            i++;
        else
        {
            j--;
        }
    }
    return false;
}

int main()
{
    // vector<vector<int>> mat = { {1, 2, 13, 13, 22, 28},
    //                             {31, 33, 34, 34, 36, 38},
    //                             {40, 48, 49, 51, 52, 53},
    //                             {55, 56, 59, 60, 60, 60},
    //                             {61, 63, 63, 64, 67, 70},
    //                             {62, 63 ,64 ,66 ,68 ,71}};

    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};

    int x = 1;

    cout << binary(mat, x);
}