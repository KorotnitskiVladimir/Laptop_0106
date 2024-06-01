#pragma once
#include <crtdbg.h>

class CPU
{
private:
    char* model;
    double price;
public:
    CPU() = default;
    CPU(const char* m, double p);
    ~CPU();
    CPU(const CPU& object);
    void setModel(const char* m);
    void setPrice(double p);
    char* getModel() const;
    double getPrice() const;
    void print() const;
};
