#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include "Animal.h"
using namespace std;

class Manager
{
protected:
    string name;
    map<string, shared_ptr<Animal>> listOfAnimals;

public:
    Manager(string name);
    virtual void addAnimal(string id, shared_ptr<Animal> animal);
    virtual void removeAnimal(string id);

    virtual void showAnimals();
    virtual ~Manager();
};

#endif