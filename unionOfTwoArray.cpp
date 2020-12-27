#include<iostream>
using namespace std;
#include<vector>

void unionOfArray (int * arrN, int * arrM, int n, int m)
{
    vector <int> finalArr ;
    int i=0, j=0;
    
    while (n!=0 && m!=0)
    {
        if(arrN[i]==arrM[j])
        {
            finalArr.push_back(arrM[j]);
            i++;
            j++;
            n--;
            m--;
        }

       else if (arrN[i] > arrM[j])
        {
            finalArr.push_back(arrM[j]);
            j++;
            m--;
        }

       else if (arrN[i] < arrM[j])
        {
            finalArr.push_back(arrN[i]);
            i++;
            n--;
        }
    }
// left over arres get filled here...............


    if(n==0)
    {
        for (int x=0; x<m; x++)
            {
                finalArr.push_back(arrM[j]);
                j++;
            }
    }

    if (m == 0)
    {
        for (int x = 0; x < n; x++)
        {
            finalArr.push_back(arrN[i]);
            i++;
        }
    }

// printing the vector here.................................

    for (int i=0; i< finalArr.size();i++)
        cout<<finalArr[i]<<"\t";

}




int main()
{

    int arr1[] = { 1, 2, 3, 4, 5 ,8};
    int arr2[]= {1,2,6,8};

    int length_1 = sizeof(arr1)/sizeof( arr1[0]);
    int length_2 = sizeof(arr2)/sizeof( arr2[0]);


    unionOfArray(arr1, arr2, length_1, length_2);

}