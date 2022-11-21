#include <iostream>
using namespace std;


int *f(int c[],int n){
    int p = new int[n];

    for (int i = 0; i < n; i++)
    {
        p[i] =c[i]*2;
    }
    return p;
}
int main()
{
    int a[4];
    int *k =f(a,4);
    
    return 0;
}