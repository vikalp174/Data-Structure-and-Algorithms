#include <iostream>
#include <vector>
using namespace std;
void rightRotate(int *v1, int start, int end)
{
    int x = v1[end];
    for (int i = end; i > start; i--)
    {
        v1[i] = v1[i - 1];
    }
    v1[start] = x;
}
void rearrange(int *v1, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0 && v1[i] < 0)
        {

            for (int j = i + 1; j < n; j++)
                if (v1[j] >= 0)
                {
                    rightRotate(v1, i, j);
                    break;
                }
        }

        if (i % 2 == 0 && v1[i] >= 0)
        {

            for (int j = i + 1; j < n; j++)
                if (v1[j] < 0)
                {
                    rightRotate(v1, i, j);
                    break;
                }
        }
    }
}
int main()
{
    int v[] = {1, 2, 3, -4, -1, 4};
    int siz = sizeof(v)/sizeof(int);

    for (auto it : v)
        cout << it << " ";

    cout << endl;

    rearrange(v, siz);

    for (auto it : v)
        cout << it << " ";
}