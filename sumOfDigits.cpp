#include <iostream>
using namespace std;

long single(long x)
{
    if (x ==0)
        return x;

    if(x%9==0)
        return 9;

    else 
        return x%9;
}

int main()
{
    cout << single(123456789);
}