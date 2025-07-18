#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include "Manager.h"
#include "Animal.h"
using namespace std;

Manager::Manager(string name) : name(name)
{
}

void Manager::addAnimal(string id, shared_ptr<Animal> animal)
{
    this->listOfAnimals[id] = animal;
}

void Manager::removeAnimal(string id)
{
    this->listOfAnimals.erase(id);
}

void Manager::showAnimals()
{
    if (this->listOfAnimals.empty())
    {
        cout << "no animals yet..." << endl;
        return;
    }
    for (auto &animal : listOfAnimals)
    {
        cout << animal.first << ": " << animal.second->getSimpleInfo() << endl;
    }
}

Manager::~Manager()
{
    listOfAnimals.clear();
}