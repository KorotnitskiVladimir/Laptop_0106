#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(const char* mod)
{
    model = new char[strlen(mod)+1];
    strcpy_s(model, strlen(mod)+1, mod);
}

RAM::RAM(const char* mod, double p): RAM(mod)
{
    price = p;
}

RAM::~RAM()
{
    delete [] model;
}

RAM::RAM(const RAM& object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy_s(this->model, strlen(object.model)+1, object.model);
    this->price = object.price;
}

void RAM::setModel(const char* m)
{
    if (!model)
    {
        if (strlen(m)>0)
        {
            model = new char[strlen(m)+1];
            strcpy_s(model, strlen(m)+1, m);
        }
    }
    else if (model)
    {
        if (strlen(m)>0)
        {
            delete [] model;
            model = new char[strlen(m)+1];
            strcpy_s(model, strlen(m)+1, m);
        }
    }
}

void RAM::setPrice(double p)
{
    if (p>0)
        price = p;
    else
        cout << "not able to set price" << endl;
}

const char* RAM::getModel() const
{
    return model;
}

double RAM::getPrice() const
{
    return price;
}

void RAM::print() const
{
    cout << "RAM Model: " << model << endl;
    cout << "Price: " << price << " USD" << endl;
}
