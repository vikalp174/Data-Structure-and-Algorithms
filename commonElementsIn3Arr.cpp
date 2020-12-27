#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {1, 5, 10, 20, 40, 80},
        B[] = {6, 7, 20, 80, 100},
        C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    set<int> st;
    vector<int> common;
    int n1 = sizeof(A) / sizeof(int),
        n2 = sizeof(B) / sizeof(int),
        n3 = sizeof(C) / sizeof(int);
    int a = 0, b = 0, c = 0;

    while (a<n1 && b<n2 && c<n3)
    {
        if ((A[a] == B[b]) && (A[a] == C[c]))
        {
            st.insert(A[a]);
            a++;
            b++;
            c++;
        }

        else if (A[a] < B[b] && B[b] == C[c])
            a++;
        else if (B[b] < A[a] && A[a] == C[c])
            b++;
        else if (C[c] < B[b] && B[b] == A[a])
            c++;

        else if (A[a] > B[b] && A[a] > C[c])
        {
            b++;
            c++;
        }

        else if (B[b] > A[a] && B[b] > C[c])
        {
            a++;
            c++;
        }

        else if (C[c] > A[a] && C[c] > B[b])
        {
            a++;
            b++;
        }
    }

    for (auto it : st)
        common.push_back(it);
}