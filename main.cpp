#include <iostream>
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Dog doggie("skull", 6);
    doggie.play();
    doggie.printInfo();
    cout << "#######################" << endl;

    Cat kitty("neno", 4);
    kitty.feed();
    kitty.makeSound();
    kitty.printInfo();
    return 0;
}
