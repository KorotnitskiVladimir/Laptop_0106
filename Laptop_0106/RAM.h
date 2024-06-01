#pragma once

class RAM
{
private:
    char* model;
    double price;
public:
    RAM() = default;
    RAM(const char* mod);
    RAM(const char* mod, double p);
    ~RAM();
    RAM(const RAM& object);
    void setModel(const char* m);
    void setPrice(double p);
    const char* getModel() const;
    double getPrice() const;
    void print() const;
    
};
