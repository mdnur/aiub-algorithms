#include <iostream>
#include <chrono>
#include <iomanip>
#include <algorithm>
using namespace std::chrono;
using namespace std;

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
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
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

    int n;
    cin >> n;
    int *A = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[n] = rand() % 100;
    }
    printList(A, n);

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    bubbleSort(A, n);
    /* .......................................  */

    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
    time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    return 0;
}


//homebrew 
