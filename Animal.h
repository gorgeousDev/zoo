#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    string type;
    int hungerLevel;

public:
    Animal(string name, string type, int hungerLevel);

    virtual void makeSound() = 0;

    virtual void feed();
    virtual void play();
    virtual void printInfo();

    virtual ~Animal();
};

#endif
