#include <iostream>
#include "Zoo_UI.h"
#include "Manager.h"
using namespace std;

ZooUI::ZooUI(shared_ptr<Manager> manager) : manager(manager) {}

ZooUI::~ZooUI() {}

void ZooUI::start()
{
    cout << "=============== ZOO ================" << endl;
    cout << "              Welcome manager!      " << endl;
    cout << "====================================" << endl;
    // int choice;
}