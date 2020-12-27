// Frequencies of Limited Range Array Elements
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v ={1,2,3};
    v.push_back(0);
    v[3]+=3;
    cout<<v[3];

}