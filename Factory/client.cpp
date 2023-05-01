#include "vehicle_factory.hpp"
#include "vehicle.hpp"
#include <iostream>
using namespace std;

int main() {
    string vehicleType;
    cin >> vehicleType;
    Vehicle* vehicle = VehicleFactory::getVehicle(vehicleType);
    vehicle->createVehicle();
    return 0;
}