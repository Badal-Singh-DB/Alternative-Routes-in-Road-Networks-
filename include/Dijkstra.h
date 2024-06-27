#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>
#include <utility>
#include "Graph.h"

class Dijkstra {
public:
    Dijkstra(Graph& g);
    std::vector<int> findShortestPath(int start, int end);
private:
    Graph& graph;
};

#endif // DIJKSTRA_H
