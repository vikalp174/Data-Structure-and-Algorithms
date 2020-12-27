#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &array, int x,int low)
{
    int  high = array.size() - 1, mid = low,c=0;
    while (mid < high)
    {
        if (array[mid] > x)
            swap(array[mid], array[high--]);

        else if (array[mid] < x)
            swap(array[mid++], array[low++]);

        else
        {
            c++;
            mid++;
        }
    }
    return low+c;
}

int main()
{
    vector<int> array = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int a = 20;
    int b = 20;
    

    partition(array, b,partition(array, a,0));

    for (auto it : array)
        cout << it << " ";
}