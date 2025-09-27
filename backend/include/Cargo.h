#ifndef CARGO_H
#define CARGO_H

#include <string>

enum class CargoType : char {
    BULK,       // Сыпучий
    LIQUID,     // Жидкий
    CONTAINER   // Контейнеры
};

struct Cargo {
    CargoType type;
    double weight;
    std::string name;
};

#endif // CARGO_H
