#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> pack = {745, 514, 666, 496, 921, 160, 877, 124, 293, 772, 978, 923, 810, 961, 30, 486, 342, 706, 352 ,189 ,227 ,954 ,398 ,85 ,930 ,254 ,485 ,152 ,536 ,389 ,551 ,228, 613, 712 ,255 ,208 ,125 ,489 ,48 ,687 ,182 ,1000 ,815 ,136 ,453 ,275 ,332 ,349 ,676 ,638 ,700 ,800 ,474 ,402 ,391 ,210 ,641 ,880 ,57 ,73 ,914 ,675 ,75 ,110 ,215 ,518 ,674 ,989 ,99 ,630 ,171 ,223 ,600 ,876 ,748 ,524 ,265 ,946 ,705 ,780 ,614 ,612 ,353 ,27 ,924 ,848 ,983 ,65 ,410 ,582 ,532 ,639 ,667 ,290 ,728 ,202 ,441 ,338 ,990 ,193};
    sort(pack.begin(),pack.end());
    int m = 50 ;
    int min_= INT_MAX;
    for (int i = 0; i+m-1 < pack.size(); i++)
    {
            min_ =min(min_,pack[i+m-1]-pack[i]);
    }
    cout<<min_;
}