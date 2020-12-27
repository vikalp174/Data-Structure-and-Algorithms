// Median of two sorted arrays of different sizes
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
double avg(double a, double b)
{
    return (a + b) / 2;
}
double median(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    int start = 0;
    int end = n;
    int x, y;
    while (start <= end)
    {
        x = (start + end) / 2;
        y = (n + m + 1) / 2 - x;

        int max1 = (x == 0) ? INT8_MIN : nums1[x - 1]; //maxmum element of first half of array one
        int min1 = (x == n) ? INT8_MAX : nums1[x];     //minimum element of second half of array one

        int max2 = (y == 0) ? INT8_MIN : nums2[y - 1]; //maxmum element of first half of array two
        int min2 = (y == m) ? INT8_MAX : nums2[y];     //minimum element of second half of array two

        if (max1 <= min2 && max2 <= min1)
        {
            if ((n + m) % 2 != 0)
                return max(max1, max2);
            else
                return avg(max(max1, max2), min(min1, min2));
        }

        else if (max1 > min2)
            end = x - 1;
        else
            start = x + 1;
    }
    return 0;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 5, 6};
    vector<int> nums2 = {4};

    cout << median(nums2, nums1);
}