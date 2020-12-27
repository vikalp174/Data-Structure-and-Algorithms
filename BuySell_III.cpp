#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//atmost 2 transections are possible
// given solution has complexity of time O(n) as well as space O(n)
 
int main()
{
    
    vector <int> prices= {1,2,3,4,5};
    
    int n = prices.size();
    vector<int> leftTrans(n, 0), rightTrans(n, 0);

    int min_ = prices[0];
        leftTrans[0]=0;
    int max_=prices[n-1];
        rightTrans [n-1]= 0;

    for(int i=1;i<prices.size();i++)
    {
        min_=min(min_,prices[i]);
        leftTrans[i]=max(leftTrans[i-1],prices[i]-min_);
        int j= n-i-1;
        max_ = max(max_,prices[j]);
        rightTrans[j]=max(rightTrans[j+1],max_-prices[j]);
        
    }
    int profit=0;
    for(int i=0;i<n;i++)
        profit=max(profit,leftTrans[i]+rightTrans[i]);

    cout<<profit;
    

    
}