#include <iostream>
using namespace std;

void bubbleSort(int *p, int n)
{

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i] > p[i + 1])
            {
                int temp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = temp;
            }
        }
    }
}

void generateRandomInt(int n)
{
    
}

void printList(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << p[n] << std::endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int *A = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[n] = rand() % 10000;
    }
    printList(A,n);
    return 0;
}