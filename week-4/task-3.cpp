#include <iostream>
using namespace std;

int *generate_data(int n)
{
    int *m = new int[n];
    for (int i = 0; i < n; i++)
    {
        m[i] = rand();
    }
    return m;
}

void printData(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
}
int linearSearch(int *m, int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (m[i] == item)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n = 100000;
    srand(time(0));
    int *a = generate_data(n);
    int time = 2500;

    return 0;
}