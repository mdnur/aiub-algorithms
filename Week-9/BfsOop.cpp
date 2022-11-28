#include </Users/mohammadnur/stdc++.h> // alternative of #include <bits/stdc++.h>. its only worin
using namespace std;

#define m 100

class BFS
{
private:
    vector<int> g[m];
    int visited[m];
    int dis[m];
    queue<int> q;

public:
    void bfs(int v)
    {
        q.push(v);
        visited[v] = 1;
        dis[v] = 0;

        while (!q.empty())
        {
            int p = q.front();
            q.pop();
            cout << p << " ";
            for (int i = 0; i < g[p].size(); i++)
            {
                int next = g[p][i];
                if (visited[next] == 0)
                {
                    q.push(next);
                    visited[next] = 1;
                    dis[next] = dis[p] + 1;
                }
            }
        }
    }
    void addEdge(int u, int v)
    {
        g[u].push_back(v);
        g[v].push_back(u);
    }
    void printBfs(int node)
    {
        for (int i = 0; i < node; i++)
        {
            cout << i << "-->";
            for (int j = 0; j < g[i].size(); j++)
            {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }
    void getDistance(int node)
    {
        for (int i = 0; i < node; i++)
        {
            cout << i << " " << dis[i] << endl;
        }
    }
};
int main()
{
    int node, edge;

    cin >> node >> edge;

    int u, v;
    BFS bfs;

    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        bfs.addEdge(u, v);
    }

    bfs.printBfs(node);

    int source;
    cout << "Enter source for BFS: ";
    cin >> source;

    bfs.bfs(source);

    cout << "\nDistance from " << source << " : " << endl;

    bfs.getDistance(node);
    return 0;
}