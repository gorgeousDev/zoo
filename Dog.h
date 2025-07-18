#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <string>

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(string name, int hungerLevel);
    void makeSound() override;
    virtual ~Dog();
};

#endif