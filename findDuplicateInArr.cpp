#include <iostream>
#include <vector>
#include <bits/stdc++.h>

class Solution
{
public:
    int findDuplicate(std::vector<int> &arr)
    {
        //O(n^2)
        for (int index_of_Arr = 0; index_of_Arr < arr.size(); index_of_Arr++)
        {
            for (int i = 0; i < arr.size(); i++)
                if (i != index_of_Arr)
                    if (arr[index_of_Arr] == arr[i])
                        return arr[i];
        }

        return 0;
    }

    int findDuplicateBySort(std::vector<int> &arr)
    {
        sort (arr.begin(),arr.end());
        int i=0;
    while(i<arr.size())
    {
        if(arr[i]==arr[i++ +1])
            return arr[i-1];
            
        
    }
    return 0;
    }

    int findDuplicateBySwap(std::vector<int> &arr)
    {
        while(arr[arr[0]]!=arr[0])
            std::swap(arr[arr[0]], arr[0]);
        return arr[0];
    }

    int findDuplicateByModOfN(std::vector<int> &arr)
    {
        int n= arr.size();
        for(int i=0; i< n; i++)
        {
            arr[arr[i]%n] += n;
        }

        for(int i=0;i<n ;i++)
        {
            if(arr[i]/n==2)
                return i;
        }
        // to restore the array we can use the below code
        // for(int i=0;i<n ;i++)
        // {
        //     arr[i]=arr[i]%n;
        // }

        return 0;
    }
};

int main()
{
    Solution s1;
    std::vector<int> aray = {1, 3, 1, 2,5,4};

    int dup = s1.findDuplicateByModOfN(aray);
    std::cout << dup;
}