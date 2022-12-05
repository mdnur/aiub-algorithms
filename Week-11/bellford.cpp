// Bellman Ford Algorithm in C++
#include </Users/mohammadnur/stdc++.h>
using namespace std;
struct Edge
{
    int u;
    int v;
    int w;
};

struct Graph
{
    int V;
    int E;
    struct Edge *edge;
};

struct Graph *createGraph(int V, int E)
{
    struct Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];
    return graph;
}

void printArr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void BellmanFord(struct Graph *graph, int u)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;

    dist[u] = 0;

    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].u;
            int v = graph->edge[j].v;
            int w = graph->edge[j].w;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    for (int i = 0; i < E; i++)
    {
        int u = graph->edge[i].u;
        int v = graph->edge[i].v;
        int w = graph->edge[i].w;
        if (dist[u] != INT_MAX && dist[u] + w < dist[v])
        {
            printf("Graph contains negative w cycle");
            return;
        }
    }

    printArr(dist, V);

    return;
}

int main()
{
    int V;
    int E;

    cin >> V >> E;

    struct Graph *graph = createGraph(V, E);

    for (int i = 0; i < E; i++)
    {
        cin >> graph->edge[i].u;
        cin >> graph->edge[i].v;
        cin >> graph->edge[i].w;
    }

    BellmanFord(graph, 0); // 0 is the source vertex

    return 0;
}