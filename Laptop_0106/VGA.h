#pragma once

class VGA
{
private:
    char* model;
    double price;
    int memory;
public:
    VGA() = default;
    VGA(const char* m, double p, int mem);
    ~VGA();
    VGA(const VGA& object);
    void setModel(const char* m);
    void setPrice(double p);
    void setMemory(int m);
    char* getModel() const;
    double getPrice() const;
    int getMemory() const;
    void print() const;
};
