#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define vi#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string name, int tickets);
    ~Visitor();

    void displayInfo() const;
};

#endif
sitor class here







#endif
