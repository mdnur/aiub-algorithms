#include <iostream>
using namespace std;

void countDegree(int **p, int n)
{

    int *d = new int[n];

    for (int i = 0; i < n; i++)
    {
        d[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i][j] == 1)
            {
                d[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " degree " << d[i] << endl;
    }
}

void printGraph(int **p, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int node, edge;

    cin >> node >> edge;

    // Dynamic memory allocation for matrix
    int **m = new int *[node];
    for (int i = 0; i < node; i++)
    {
        m[i] = new int[node];
    }

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            m[i][j] = 0;
        }
    }

    int u, v;

    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        m[u][v] = m[v][u] = 1;
    }

    printGraph(m, node);

    countDegree(m, node);

    return 0;
}

/*

7 10
0 1
0 2
0 3
1 3
2 4
2 5
3 6
3 4
4 5
4 6

0 1 1 1 0 0 0
1 0 0 1 0 0 0
1 0 0 0 1 1 0
1 1 0 0 1 0 1
0 0 1 1 0 1 1
0 0 1 0 1 0 0
0 0 0 1 1 0 0

*/
