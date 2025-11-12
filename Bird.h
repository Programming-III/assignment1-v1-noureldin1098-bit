#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class birclass Bird : public Animal {
private:
    float wingSpan;

public:
    Bird();
    Bird(string n, int a, bool hungry, float ws);
    ~Bird();

    void display() const override;
};
d here 







#endif
