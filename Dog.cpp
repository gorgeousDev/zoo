#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

Dog::Dog(string name, int hungerLevel) : Animal(name, "dog", hungerLevel)
{
}

void Dog::makeSound()
{
    cout << "Woof Woof!";
}

Dog::~Dog()
{
    cout << "woof is out!" << endl;
}