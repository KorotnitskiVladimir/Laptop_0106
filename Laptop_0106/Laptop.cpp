#include "Laptop.h"
#include <iostream>
using namespace std;

int Laptop::c = 0;

Laptop::Laptop(const char* mod, HDD hd, RAM rm, CPU cp, VGA v): hdd(hd) , ram(rm), proc(cp), vid(v)
{
    model = new char[strlen(mod)+1];
    strcpy_s(model, strlen(mod)+1, mod);
    price = hdd.getPrice() + ram.getPrice() + proc.getPrice() + vid.getPrice() + 150;
    if (hdd.getPrice()>0)
        c++;
    if (ram.getPrice()>0)
        c++;
    if (proc.getPrice()>0)
        c++;
    if (vid.getPrice()>0)
        c++;
}

Laptop::~Laptop()
{
    delete [] model;
}

double Laptop::getPrice() const
{
    return price;
}

int Laptop::getC()
{
    return c;
}

void Laptop::print() const
{
    cout << "Laptop: " << model << endl << "HDD: " << hdd.getModel() << endl <<
        "RAM: " << ram.getModel() << endl << "CPU: " << proc.getModel() << endl
        << "VGA: " << vid.getModel() << endl << "Price: " << price << " USD" << endl;
    cout << "Laptop consists of " << c << " elements" << endl;
}
