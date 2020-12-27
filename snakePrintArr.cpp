#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{45, 48, 54},
                               {21, 89, 87},
                               {70, 78, 15}};

    int row = 0;
    int dir = 0;
    int n = mat.size();
    while (row < n)
    {
        if (dir == 0 )
        {
            for (int i = 0; i < n; i++)
                cout << mat[row][i] << " ";
            row++;
        }
        else if (dir == 1 )
        {

            for (int i = n - 1; i >= 0; i--)
            {
                cout << mat[row][i] << " ";
            }
                
            row++;
        }
        dir = (dir + 1) % 2;
    }
}