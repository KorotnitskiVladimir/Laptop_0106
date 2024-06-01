#include "CPU.h"
#include <iostream>
using namespace std;

CPU::CPU(const char* m, double p)
{
    model = new char[strlen(m)+1];
    strcpy_s(model, strlen(m)+1, m);
    price = p;
}

CPU::~CPU()
{
    delete [] model;
}

CPU::CPU(const CPU& object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy_s(this->model, strlen(object.model)+1, object.model);
    this->price = object.price;
}

void CPU::setModel(const char* m)
{
    if (strlen(m)>0)
    {
        if (model)
        {
            delete [] model;
            model = new char[strlen(m)+1];
            strcpy_s(model, strlen(m)+1, m);
        }
        else
        {
            model = new char[strlen(m)+1];
            strcpy_s(model, strlen(m)+1, m);
        }
    }
}

void CPU::setPrice(double p)
{
    price = p;
}

char* CPU::getModel() const
{
    return model;
}

double CPU::getPrice() const
{
    return price;
}

void CPU::print() const
{
    cout << "CPU: " << model << endl << "Price: " << price << " USD" << endl;
}
