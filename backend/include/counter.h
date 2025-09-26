#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int value READ value NOTIFY valueChanged)

public:
    explicit Counter(QObject *parent = nullptr);
    int value() const;

public slots:
    void increment();

signals:
    void valueChanged();

private:
    int m_value;
};



#endif // COUNTER_H

