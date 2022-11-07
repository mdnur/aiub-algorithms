#include <iostream>
using namespace std;

void generateData(int n)
{
    srand(time(0));

    freopen("out.txt", "w", stdout);
    for (int i = 0; i < n; i++)
    {
        cout << (rand() % 100000 + 1) << endl;
    }
    // printList(a,n);
}
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                Swap(&arr[j], &arr[j + 1]);
}

void printList(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
    cout << endl;
}

int main()
{

    int n = 100000;
    generateData(n);

    int *m = new int[n];
    
    freopen("out.txt", "r", stdin);

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    printList(m,n);

    // bubbleSort(m, n);

    return 0;
}
