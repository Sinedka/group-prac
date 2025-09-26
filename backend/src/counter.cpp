#include "counter.h"

Counter::Counter(QObject* parent) : QObject(parent), m_value(0) {}

int Counter::value() const { return m_value; }

void Counter::increment() {
  m_value++;
  emit valueChanged();
}
