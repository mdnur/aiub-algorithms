#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <chrono>
using namespace std::chrono;
using namespace std::chrono;
using namespace std;

void printData(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
}

void insertionSort(int *array, int size)
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

int main()
{

    int n = 1000000;

    int *a = new int[n];
    ifstream fin("10000.txt");

    
    cout<< "hello " <<endl;
    for (int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    insertionSort(a, n);
    printData(a, n);

    cout << "hello";

    

    return 0;
}
