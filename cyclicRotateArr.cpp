// Cyclically rotate an array by one
#include<iostream>
using namespace std;
#include<vector>
void swap(int *x,int *y)
{
    int z = *x;
    *x= *y;
    *y=z;

}

int main()
{
    vector<int> array = {9, 8, 7, 6, 4, 2, 1, 3};
    int z=array[array.size()-1];
    int length = array.size()-1;

    for (int i=0;i<array.size();i++)
    {
        array[length-i]= array[length-i-1];
    }
    array[0]=z;

    for(int i=0;i<array.size();i++)
        cout<<array[i]<<"\t";

}