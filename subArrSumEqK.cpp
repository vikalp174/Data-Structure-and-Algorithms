#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2,3,4,5};
    int k = 9;
    int l = 0, r = 0, sum = 0;
    while (r < nums.size())
    {

        if (sum < k)
        {
            sum += nums[r++];
        }

        if (sum > k)
        {
            sum = sum - nums[l++];
        }
        if (sum == k)
        {
            cout << "from "<<l<<" to "<<r-1;
            break;
        }
    }
}