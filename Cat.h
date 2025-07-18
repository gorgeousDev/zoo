#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Cat : public Animal
{
public:
    Cat(string name, int hungerLevel);
    void makeSound() override;
    virtual ~Cat();
};
#endif