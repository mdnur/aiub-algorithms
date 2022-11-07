#include <iostream>
using namespace std;

void printList(int m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i] << " ";
    }
}
void insertionSort(int array[], int size)
{
    for (int j = 1; j < size; j++)
    {
        int key = array[j];
        int i = j - 1;

        while (key < array[i] && i >= 0)
        {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }
}
int *generateArray(int n)
{
    int *arr = new int[n];

    freopen("10000.txt", "r", stdout);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int n = 1000000;
    // cin >> n;
    int *arr = generateArray(n);
    printList(arr,n);
    // insertionSort(arr,n);
    return 0;
}