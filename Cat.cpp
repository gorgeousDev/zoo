#include <iostream>
#include <string>
#include "Cat.h"

using namespace std;

Cat::Cat(string name, int hungerLevel) : Animal(name, "cat", hungerLevel) {}
void Cat::makeSound()
{
    cout << "Meowww!";
}

Cat::~Cat()
{
    cout << "Meow is out!" << endl;
}