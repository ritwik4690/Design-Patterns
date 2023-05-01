#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp

#include <iostream>
#include "car.hpp"
#include "bike.hpp"
#include "vehicle.hpp"
using namespace std;

class VehicleFactory {
public:
    static Vehicle* getVehicle(string vehicleType);
};

#endif