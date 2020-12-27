#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> finalArr;
    int arr1[] = {1, 2,2,2, 3,3,3, 4, 5, 6, 85,85};
    int arr2[] = {1, 3,6,85, 99};

    int length_1 = sizeof(arr1) / sizeof(arr1[0]);
    int length_2 = sizeof(arr2) / sizeof(arr1[0]);
    int i = 0, j = 0;

    while (i < length_1 && j < length_2)
    {

        if (arr1[i]==arr1[i+1])
            i++;

        if (arr2[j]==arr2[j+1])
            j++;



        if (arr1[i]==arr2[j])
            {
                finalArr.push_back(arr2[j++]);
                i++;
            }
        if (arr1[i]>arr2[j])
            {
              j++;
            }
        if (arr1[i]<arr2[j])
            {
                i++;
            }
    }


    for(int i=0;i<finalArr.size();i++)
        cout<<finalArr[i]<<"\t";
}