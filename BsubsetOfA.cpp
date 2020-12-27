#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int ,int> mp;
    vector<int> a = {1223, 324, 1584};
    vector<int> b = {11};
    int count=0;
   for(int i=0;i<a.size();i++)
        mp[a[i]]++;

    for(auto it:b)
        if(mp[it])
            count++;

    if(count!=b.size())
        cout<<"No\n";

    else
        cout<<"yes\n";

}