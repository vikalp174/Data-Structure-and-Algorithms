#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    return v1[0] < v2[0];
}
void input(int x, int y, vector<vector<int>> &v1)
{

    vector<int> a1;

    a1.push_back(x);
    a1.push_back(y);

    v1.push_back(a1);
}

int main()
{

    vector <vector <int>> vect , stk;
    int x,y;

    vect = {{0, 2}, {1, 4}, {3, 5}};

    sort(vect.begin(), vect.end(), sortcol);
    input(vect[0][0],vect[0][1],stk);

    for(int i=1;i<vect.size();i++)
    {
        if(stk[stk.size()-1][1] >= vect[i][0])
        {
            x = stk[stk.size() - 1][0];
            y = max(stk[stk.size() - 1][1], vect[i][1]);
            stk.pop_back();
            input(x,y,stk);
        }

        else
        {
            input(vect[i][0], vect[i][1], stk);
        }
        
    }
    
   for(int i=0;i<stk.size();i++)
   {
       for(int j=0;j<stk[i].size();j++)
       {
           cout<<stk[i][j]<<"\t";
       }
       cout<<endl;
   }


}