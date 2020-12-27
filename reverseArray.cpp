#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *x, int *y)
{
    int z = *x;
    *x=*y;
    *y= z;
}

int main()
{
    int arr []={1,2,3,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    int last = length-1;

for (int i=0;i<length;i++)
    cout<<arr[i]<<"\t";

for (int i=0;i<length/2;i++)
{
    swap(&arr[i],&arr[last-i]);
}

cout<<endl;

for (int i = 0; i < length; i++)
    cout << arr[i] << "\t";

}