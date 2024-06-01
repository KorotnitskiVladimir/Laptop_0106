#include "VGA.h"
#include <iostream>
using namespace std;

VGA::VGA(const char* m, double p, int mem)
{
    model = new char[strlen(m)+1];
    strcpy_s(model, strlen(m)+1, m);
    price = p;
    memory = mem;
}

VGA::~VGA()
{
    delete [] model;
}

VGA::VGA(const VGA& object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy_s(this->model, strlen(object.model)+1, object.model);
    this->price = object.price;
    this->memory = object.memory;
}

void VGA::setModel(const char* m)
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

void VGA::setPrice(double p)
{
    price = p;
}

void VGA::setMemory(int m)
{
    memory = m;
}

char* VGA::getModel() const
{
    return model;
}

double VGA::getPrice() const
{
    return price;
}

int VGA::getMemory() const
{
    return memory;
}

void VGA::print() const
{
    cout << "VGA: " << model << endl << "Memory: " << memory << " GB" << endl << "Price: " << price << " USD" << endl;
}
