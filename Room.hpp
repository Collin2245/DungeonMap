#ifndef Room_hpp
#define Room_hpp
#include "Door.hpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>


class Room
{


private:
    std::__cxx11::string   name;
    Door * up;
    Door * down;
    Door * left;
    Door * right;
    std::string checkDoor(Door * test);



public:
    Room(std::string name, Door * up, Door * down, Door * left, Door * right);
    void displayRoom();


};





#endif