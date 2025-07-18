#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

Animal::Animal(string name, string type, int hungerLevel) : name(name), type(type), hungerLevel(hungerLevel) {}

void Animal::feed()
{
    if (hungerLevel > 0)
        this->hungerLevel--;
}

void Animal::play()
{
    this->hungerLevel++;
}
void Animal::printInfo()
{
    cout << "Displaying the pet data..." << endl;
    cout << "type: " << this->type << endl;
    cout << "name: " << this->name << endl;
    cout << "hunger level: " << this->hungerLevel << endl;
}

Animal::~Animal()
{

}