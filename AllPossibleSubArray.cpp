// All posible continous sub array

#include<iostream>
#include<vector>
using namespace std;
vector <int> sums;

int main()
{

    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(int);
    for (int i = 1; i <=length; i++)
    {
        for (int j=0;j<length;j++)
        {
            if(i+j>length)
                break;
            for(int k=j; k<i+j; k++)
            {
            cout<<arr[k]<<"\t";
            
            }
            cout << endl;
        }
        cout<<endl;
        
    }

       
    



for (int i = 0; i < sums.size(); i++)
    cout<<sums[i]<<"\t";
}