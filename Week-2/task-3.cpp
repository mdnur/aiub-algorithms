#include <iostream>
// #include "/Users/mohammadnur/stdc++.h"
using namespace std;

#define N 100

void printList(int m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i] << " ";
    }
}

int main()
{

    int a[N];
    // int n;
    // cin>>n;
    // int *a =(int*)malloc(n*sizeof(int));
    // int *a = new int[n];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    printList(a, N);

    return 0;
}
