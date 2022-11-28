#include <iostream>
#include <vector>
using namespace std;

void countDegree(vector<int> p[], int n)
{

    int *d = new int[n];

    for (int i = 0; i < n; i++)
    {
        d[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

        d[i] = p[i].size();
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " degree " << d[i] << endl;
    }
}

void printGraph(vector<int> p[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << i << "-->";
        for (int j = 0; j < p[i].size(); j++)
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

    vector<int> m[7];

    int u, v;

    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
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

0-->1 2 3
1-->0 3
2-->0 4 5
3-->0 1 6 4
4-->2 3 5 6
5-->2 4
6-->3 4

*/
