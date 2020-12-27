#include <iostream>
using namespace std;
int multiply(int , int *, int );
int main()
{
    int n = 100;
    int arr[10000] ;
    arr[0]=1;
    int siz =1;

        for (int i = 2; i <= n; i++)
    {
        siz= multiply(siz, arr, i);
    }

    for(int i= siz-1;i>=0;i--)
        cout<<arr[i];
}

int multiply(int siz, int* arr,int n)
{
    int carry =0;
    for(int x=0;x<siz;x++)
    {
        int product = arr[x]*n+carry;
        arr[x]=product%10;
        carry= product/10;
    }
    while (carry)
    {
        arr[siz]=carry%10;
        carry=carry/10;
        siz++;
    }
    return siz;
}


