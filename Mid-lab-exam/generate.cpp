#include <iostream>
#include <fstream>
using namespace std;
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
    ofstream fout("10000.txt");
    for (int i = 0; i < n; i++)
    {
        fout << p[i] << endl;
    }
}

int main()
{

    int n = 1000000;
    srand(time(0));
    int *a = generate_data(n);
    printData(a, n);

    return 0;
}
