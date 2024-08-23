// 바이러스
#include <iostream>
#include <vector>

void DFS(std::vector<int> *graph, std::vector<bool> *visited, int node)
{
    if ((*visited)[node])
        return;
    (*visited)[node] = true;
    graph[0].push_back(node);
    for (auto i : graph[node])
    {
        if (!(*visited)[i])
        {
            DFS(graph, visited, i);
        }
    }
}

int main()
{
    int NofComputers, NofEdges;
    std::cin >> NofComputers;
    std::cin >> NofEdges;
    std::vector<int> *graph = new std::vector<int>[NofComputers + 1];
    std::vector<bool> visited;
    visited.assign(NofComputers + 1, false);

    for (int i = 0; i < NofEdges; i++)
    {
        int a, b;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    DFS(graph, &visited, 1);
    std::cout << graph[0].size() - 1;
    return 0;
}