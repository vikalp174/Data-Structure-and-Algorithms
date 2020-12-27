#include <iostream>
using namespace std;

struct Pair{
    int max, min;
};

int main()
{
    struct Pair p1;

    int arr[] = {7,54,89,1,2,5,6,2,45,2,56,2,6,5,3,6,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    p1.max= arr[0];
    p1.min= arr[0];
    
    

    for (int i=0;i<length;i++)
    {
        if (p1.max < arr[i])
        {
            p1.max=arr[i];

        }

        if (p1.min>arr[i])
        {
            p1.min= arr[i];
        }
    }


    cout<<"smalest no.\t"<<p1.min<<endl;
    cout<<"largest no.\t"<<p1.max;

}