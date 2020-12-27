#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

void st(vector<int> &vec)
{
    sort(vec.begin(),vec.end());
}

int main(){
    vector<int> a = { 1,8,4,3,7,5,9,2,4,3,5,6,8,9};

    st(a);

    for (auto it:a)
        cout<<it<<" ";

}