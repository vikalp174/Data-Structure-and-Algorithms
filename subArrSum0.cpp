#include <iostream>
#include<set>
using namespace std;

int main()
{
    int arr[] = {0,4, 2, 3, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    set<int> st={0};
    int sum=0;
    

    for (int i = 0; i < n; i++)
    {
        st.insert(sum);
        sum+=arr[i];        
        if(st.find(sum)!= st.end())
        {
            cout<<"yes";
           
        }
                
        
    }
}