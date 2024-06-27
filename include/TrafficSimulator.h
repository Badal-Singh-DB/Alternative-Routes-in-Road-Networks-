#ifndef TRAFFICSIMULATOR_H
#define TRAFFICSIMULATOR_H

#include "Graph.h"
#include "Vehicle.h"
#include <vector>

class TrafficSimulator {
public:
    TrafficSimulator(Graph& g);
    void run();
private:
    Graph& graph;
    std::vector<Vehicle> vehicles;

    void updateTraffic();
    void renderScene();
};

#endif // TRAFFICSIMULATOR_H
