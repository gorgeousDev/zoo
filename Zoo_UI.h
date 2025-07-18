#ifndef ZOO_UI_H
#define ZOO_UI_H
#include "Manager.h"
#include <memory>
using namespace std;

class ZooUI
{
private:
    shared_ptr<Manager> manager;

public:
    ZooUI(shared_ptr<Manager> manager);
    void start();
    ~ZooUI();
};

#endif