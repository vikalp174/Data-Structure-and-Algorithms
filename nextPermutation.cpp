//next permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vect = {3,2,1};
    int x,y;
    bool flg = true;
    for (auto it : vect)
    {
        cout << it << "\t";
    }
    cout<<endl;
    // vect= nextPerm(vect);
    for(int i=vect.size()-1; i>-1;i--)
    {
    
        if(vect[i-1]<vect[i])
        {
            x=i-1;
            flg= false;
            break;
        }

    }
        

    

    if (flg == 0)
    {
        for (int i = vect.size() - 1; i >= 0; i--)
        {
            if (vect[i] > vect[x])
            {
                y = i;
                break;
            }
        }
        swap(vect[x], vect[y]);

        sort(vect.begin() + x + 1, vect.end());

        for (auto it : vect)
        {
            cout << it << "\t";
        }
    }
    if (flg)
    {
        sort(vect.begin(), vect.end());
        for (auto it : vect)
        {
            cout << it << "\t";
        }
    }
   

   
}