#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define an#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string n, int a, bool hungry);
    virtual ~Animal();

    // Getters
    string getName() const;
    int getAge() const;
    bool getIsHungry() const;

    // Setters
    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool h);

    virtual void display() const;
    virtual void feed();
};

// -------------------- MAMMAL --------------------
class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(string n, int a, bool hungry, string color);
    ~Mammal();

    void display() const override;
};

// -------------------- BIRD --------------------
class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird();
    Bird(string n, int a, bool hungry, float ws);
    ~Bird();

    void display() const override;
};

// -------------------- REPTILE --------------------
class Reptile : public Animal {
private:
    bool isVenomous;

public:
    Reptile();
    Reptile(string n, int a, bool hungry, bool venom);
    ~Reptile();

    void display() const override;
};

#endifimal class here 



#endif
