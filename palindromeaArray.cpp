#include<iostream>
#include<math.h>
using namespace std;
bool palindrome(int num)
{
    int dig,rev=0;
    int cop=num;
    do{
        dig=num%10;
        rev = (rev*10)+ dig;
        num/=10;

    }while (num);

     if(cop==rev)
        return true;
    
    return false;
}
int main()
{
    int x= 12345;
    int t=x;
    int n =0;
    while(t)
    {
        t=t/10;
        n++;
    }

    cout<<palindrome(x);

    

}