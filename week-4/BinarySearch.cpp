#include <iostream>
#include <fstream>
#include <chrono>
using namespace std::chrono;
using namespace std;

// void bubbleSort(int *p, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (p[j] > p[j + 1])
//             {
//                 int temp = p[j];
//                 p[j] = p[j + 1];
//                 p[j + 1] = temp;
//             }
//         }
//     }
// }

int bubbleSort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < (n - 1); i++)
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (*(arr + j) > *(arr + (j + 1)))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + (j + 1));
                *(arr + (j + 1)) = temp;
            }
        }
    return 0;
}
void printData(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
}

int binarySearch(int A[], int value, int n)
{
    int low = 0;
    int high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (A[mid] == value)
            return mid;

        if (A[mid] < value)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{

    int n = 1000000;

    int *a = new int[n];
    ifstream fin("10000.txt");

    for (int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    // printData(a,n);
    bubbleSort(a, n);

    int item = 1800007263;
    printData(a, n);

    // /*///////////////////////////*/

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    // /*  ..........Change your algorithm...............*/

    int index = binarySearch(a, item, n);

    // /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
    time_taken1 = time_taken1 * 1e-6;

    cout << "Data Size " << n << " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << " milisec" << endl;

    if (index == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << item << " Found in index=" << index << endl;
    }

    return 0;
}
