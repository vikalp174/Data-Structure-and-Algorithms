#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void rightRotate(int *v1, int start,int end)
{
    int x=v1[end];
    for(int i=end;i>start;i--)
    {
       v1[i]=v1[i-1];
    }
    v1[start]=x;
}
struct count
{
    int e;
    int c;
};
int main()
{
    struct count temp[2] = {0};

    cout<<temp[0].e;
    
}