#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    int min_ = v1[0];
    int profit = 0;

    for (auto it : v1)
    {
        min_ = min(min_, it);
        
        profit = max(profit, it - min_);
    }

    cout << profit;
}