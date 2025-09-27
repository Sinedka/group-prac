#ifndef CRANE_H
#define CRANE_H

#include "Cargo.h"
#include <vector>
#include <chrono>

struct Crane {
    int id;
    CargoType supportedCargoType;
    bool isBusy;
    std::chrono::system_clock::time_point availableTime; // Время, когда кран станет свободным
    std::string busyWithShipName; // Имя судна, которое обслуживает кран
};

#endif // CRANE_H
