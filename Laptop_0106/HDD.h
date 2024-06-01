#pragma once

class HDD
{
private:
    char* model;
    double price;
public:
    HDD() = default;
    HDD(const char* mod);
    HDD(const char* mod, double p);
    ~HDD();
    HDD(const HDD& object);
    void setModel(const char* m);
    void setPrice(double p);
    const char* getModel() const;
    double getPrice() const;
    void print() const;
};
