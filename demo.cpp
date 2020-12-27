#include <iostream>

#include<vector>
using namespace std;

int main()
{
  
    vector<int> arr = {2,3,2,1,5,5};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        arr[arr[i]% n] += n;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}