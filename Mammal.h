#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define maclass Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(string n, int a, bool hungry, string color);
    ~Mammal();

    void display() const override;
};
mmal class here






#endif
