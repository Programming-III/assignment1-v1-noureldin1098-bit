#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define #ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure {
private:
    Animal** animals;
    int capacity;
    int currentCount;

public:
    Enclosure(int cap = 5);
    ~Enclosure();

    void addAnimal(Animal* a);
    void displayAnimals() const;
};

#endif
enclosure class here 








#endif
