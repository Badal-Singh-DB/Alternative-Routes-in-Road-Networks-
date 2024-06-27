#ifndef VEHICLE_H
#define VEHICLE_H

#include <vector>

class Vehicle {
public:
    Vehicle(int id, int start, int end);
    void updatePosition();
    // Other methods and members
private:
    int id;
    int currentPos;
    int destination;
    double speed;
    std::vector<int> path;
};

#endif // VEHICLE_H
