#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string type;
    string name;
    int hungerLevel;

public:
    Animal(name, type, hungerLevel);
    ~Animal();
};

Animal::Animal(string name, string type, int hungerLevel) : name(name), type(type), hungerLevel(hungerLevel)
{
}

Animal::~Animal()
{
}
