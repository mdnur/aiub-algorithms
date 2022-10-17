#include <iostream>
#include <chrono>
#include <iomanip>
#include <algorithm>
using namespace std::chrono;
using namespace std;

void selection(int A[], int n, int value)
{

}
void inSectionSort(int *p, int n)
{
    for (int step = 1; step < n; step++)
    {
        int key = p[step];
        int j = step - 1;
        while (key < p[j] && j >= 0)
        {
            p[j + 1] = p[j];
            --j;
        }
        p[j + 1] = key;
    }
}
void bubbleSort(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}
void printList(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n=1;
    cin >> n;

    while (n <= 100000)
    {
        int *A = new int[n];
        // gererate random int
        srand(time(0));
        for (int i = 0; i < n; i++)
        {
            A[i] = rand() % 10000 + 1;
        }

        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        /*  ..........Change your algorithm...............*/
        bubbleSort(A, n);
        // inSectionSort(A,n);
        /* .......................................  */

        /*.....................Time taken by 1st Algorithm........................*/
        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-6;
        cout << "Data Size " << n << " Time taken by program is : " << fixed
             << time_taken1 << setprecision(20);
        cout << " milisec" << endl;
        n += 5000;
        // delete A;x
    }

    return 0;
}