#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

#include <iostream>
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;

// -------------------- Animal Base --------------------
Animal::Animal() : name(""), age(0), isHungry(false) {}
Animal::Animal(string n, int a, bool hungry) : name(n), age(a), isHungry(hungry) {}
Animal::~Animal() {}

string Animal::getName() const { return name; }
int Animal::getAge() const { return age; }
bool Animal::getIsHungry() const { return isHungry; }

void Animal::setName(string n) { name = n; }
void Animal::setAge(int a) { age = a; }
void Animal::setIsHungry(bool h) { isHungry = h; }

void Animal::display() const {
    cout << name << " (age: " << age << ", " 
         << (isHungry ? "hungry" : "not hungry") << ")";
}

void Animal::feed() {
    if (isHungry) {
        cout << name << " is being fed.\n";
        isHungry = false;
    } else {
        cout << name << " is not hungry.\n";
    }
}

// -------------------- Mammal --------------------
Mammal::Mammal() : Animal(), furColor("unknown") {}
Mammal::Mammal(string n, int a, bool hungry, string color)
    : Animal(n, a, hungry), furColor(color) {}
Mammal::~Mammal() {}

void Mammal::display() const {
    cout << getName() << " (age: " << getAge() << ", "
         << (getIsHungry() ? "hungry" : "not hungry") << ")";
}

// -------------------- Bird --------------------
Bird::Bird() : Animal(), wingSpan(0.0f) {}
Bird::Bird(string n, int a, bool hungry, float ws)
    : Animal(n, a, hungry), wingSpan(ws) {}
Bird::~Bird() {}

void Bird::display() const {
    cout << getName() << " (age: " << getAge() << ", "
         << (getIsHungry() ? "hungry" : "not hungry") << ")";
}

// -------------------- Reptile --------------------
Reptile::Reptile() : Animal(), isVenomous(false) {}
Reptile::Reptile(string n, int a, bool hungry, bool venom)
    : Animal(n, a, hungry), isVenomous(venom) {}
Reptile::~Reptile() {}

void Reptile::display() const {
    cout << getName() << " (age: " << getAge() << ", "
         << (isVenomous ? "venomous, " : "not venomous, ")
         << (getIsHungry() ? "hungry" : "not hungry") << ")";
}

// -------------------- Enclosure --------------------
Enclosure::Enclosure(int cap) : capacity(cap), currentCount(0) {
    animals = new Animal*[capacity];
}

Enclosure::~Enclosure() {
    for (int i = 0; i < currentCount; ++i) {
        delete animals[i];
    }
    delete[] animals;
}

void Enclosure::addAnimal(Animal* a) {
    if (currentCount < capacity) {
        animals[currentCount++] = a;
    } else {
        cout << "Enclosure full, cannot add more animals.\n";
    }
}

void Enclosure::displayAnimals() const {
    cout << "Enclosure 1 Animals:\n";
    for (int i = 0; i < currentCount; ++i) {
        animals[i]->display();
        cout << endl;
    }
}

// -------------------- Visitor --------------------
Visitor::Visitor() : visitorName(""), ticketsBought(0) {}
Visitor::Visitor(string name, int tickets)
    : visitorName(name), ticketsBought(tickets) {}
Visitor::~Visitor() {}

void Visitor::displayInfo() const {
    cout << "\nVisitor Info\n";
    cout << "Name: " << visitorName << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
}

// -------------------- MAIN --------------------
int main() {
    Enclosure* enc1 = new Enclosure(5);

    Animal* a1 = new Mammal("lion", 5, true, "golden");
    Animal* a2 = new Bird("parrot", 2, false, 0.5f);
    Animal* a3 = new Reptile("snake", 3, true, true);

    enc1->addAnimal(a1);
    enc1->addAnimal(a2);
    enc1->addAnimal(a3);

    enc1->displayAnimals();

    Visitor v("Sarah Ali", 3);
    v.displayInfo();

    delete enc1;

    return 0;
}

// ============== MAIN FUNCTION ==============
int main() {
    
    
    return 0;
}
