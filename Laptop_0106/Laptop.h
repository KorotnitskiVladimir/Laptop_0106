#pragma once
#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"

class Laptop
{
    HDD hdd;
    RAM ram;
    CPU proc;
    VGA vid;
    char* model;
    double price;
    static int c;
public:
    Laptop() = default;
    Laptop(const char* mod, HDD hd, RAM rm, CPU cp, VGA v);
    ~Laptop();
    double getPrice() const;
    void print() const;
    static int getC();
};
