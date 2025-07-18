#include "Manager.h"
#include "Dog.h"
#include "Cat.h"
#include "Zoo_UI.h"
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{
    shared_ptr<Manager> alkhaol = make_shared<Manager>("steve");
    ZooUI ui(alkhaol);
    ui.start();

    return 0;
}
