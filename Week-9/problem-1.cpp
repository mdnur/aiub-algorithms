#include <iostream>
#include <queue>
using namespace std;

void bfs(int *G, int v)
{
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int i = 0; i < G.size(); i++)
        {
            int next = graph[v][i];
            if (visited[next] == true)
            {
                q.push(next);
                visited[next] = 1;
            }
        }
    }
}
int main()
{

    return 0;
}