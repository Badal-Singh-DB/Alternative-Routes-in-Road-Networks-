#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <utility>

class Graph {
public:
    Graph(int nodes);
    void addEdge(int u, int v, double weight);
    std::vector<int> shortestPath(int start, int end);
private:
    int numNodes;
    std::vector<std::vector<std::pair<int, double>>> adjList;
};

#endif // GRAPH_H
