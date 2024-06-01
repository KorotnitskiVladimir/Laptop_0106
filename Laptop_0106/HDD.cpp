#include "HDD.h"
#include <iostream>
using namespace std;

HDD::HDD(const char* mod)
{
    model = new char[strlen(mod)+1];
    strcpy_s(model, strlen(mod)+1, mod);
}

HDD::HDD(const char* mod, double p): HDD(mod)
{
    price = p;
}

HDD::~HDD()
{
    delete [] model;
}

HDD::HDD(const HDD& object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy_s(this->model, strlen(object.model)+1, object.model);
    this->price = object.price;
}

void HDD::setModel(const char* m)
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

void HDD::setPrice(double p)
{
    if (p>0)
        price = p;
    else
        cout << "not able to set price" << endl;
}

const char* HDD::getModel() const
{
    return model;
}

double HDD::getPrice() const
{
    return price;
}

void HDD::print() const
{
    cout << "HDD Model: " << model << endl;
    cout << "Price: " << price << " USD" << endl;
}
