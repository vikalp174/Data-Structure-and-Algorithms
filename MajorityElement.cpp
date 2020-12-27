#include <iostream>
using namespace std;
struct frq
{
    int e;
    int c;
};
//majority element is the element that appears more than n/k times
int main()
{
    int arr[] = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 5, 5, 5, 7,5};
    int n = sizeof(arr) / sizeof(int);

    struct frq elem;
    elem.c = 0;

    for (int i = 0; i < n; i++)
    {
        if (elem.c == 0)
        {
            elem.e = arr[i];
            elem.c++;
        }

        else if (elem.e == arr[i])
            elem.c++;

        else
            elem.c--;
    }
    if(elem.c>0)
    cout << elem.e;
}