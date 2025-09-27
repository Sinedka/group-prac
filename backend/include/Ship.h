#ifndef SHIP_H
#define SHIP_H

#include "Cargo.h"
#include <string>
#include <chrono>

struct Ship {
    std::string name;
    Cargo cargo;
    std::chrono::system_clock::time_point scheduledArrivalTime; // Запланированное время прибытия
    std::chrono::system_clock::time_point actualArrivalTime;    // Фактическое время прибытия
    int plannedStayDurationDays;                                // Планируемый срок стоянки в днях
    double penaltyPerDay;                                       // Штраф за день простоя

    // Дополнительные поля для статистики симуляции
    std::chrono::system_clock::time_point arrivalInPortTime;    // Время фактического прихода в порт
    std::chrono::system_clock::time_point queueStartTime;       // Время начала ожидания в очереди
    std::chrono::system_clock::time_point serviceStartTime;     // Время начала разгрузки
    std::chrono::system_clock::time_point serviceEndTime;       // Время окончания разгрузки
    std::chrono::system_clock::time_point departureTime;        // Время отхода из порта
};

#endif // SHIP_H
