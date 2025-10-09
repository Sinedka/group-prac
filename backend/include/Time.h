#include <cstdint>
class Time {
  public:
  Time(uint64_t time) : time(time) {}; // NOLINT(google-explicit-constructor)
  uint64_t getTime() const { return time; }

  Time operator+(const Time& other) const { return Time(time + other.time); }
  Time operator-(const Time& other) const { return Time(time - other.time); }

  Time& operator+=(const Time& other) {
    time += other.time;
    return *this;
  }

  Time& operator-=(const Time& other) {
    time -= other.time;
    return *this;
  }

  bool operator<(const Time& other) const { return time < other.time; }
  bool operator<=(const Time& other) const { return time <= other.time; }
  bool operator>(const Time& other) const { return time > other.time; }
  bool operator>=(const Time& other) const { return time >= other.time; }
  bool operator==(const Time& other) const { return time == other.time; }
  bool operator!=(const Time& other) const { return time != other.time; }

  private:
  uint64_t time;
};
