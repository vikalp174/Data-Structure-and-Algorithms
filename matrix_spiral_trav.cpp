#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  };

    int r= matrix.size();
    int c = matrix[0].size();
    int top=0;
    int bot=r-1;
    int left= 0;
    int right= c-1;
    int dir=0;

    while(left<=right && top<=bot)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<matrix[top][i]<<" ";
               
            }
            top++;
        }

       else if(dir == 1)
        {
            for(int i=top;i<=bot;i++)
            {
                cout<<matrix[i][right]<<" ";
            }
            right--;
        }

       else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<matrix[bot][i]<<" ";
            }
            bot--;
        }

        else 
        {
            for(int i=bot;i>=top;i--)
            {
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }

        dir = (dir+1)%4;

    }
}