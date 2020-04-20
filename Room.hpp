#ifndef Room_hpp
#define Room_hpp

#include <iostream>
#include <string.h>
#include <stdlib.h>


class Door;
class Room
{


private:

    std::string checkDoor(Door * test);



public:
    Room();
    void setValues(std::string name, Door * up, Door * down, Door * left, Door * right);
    void displayRoom();
    std::__cxx11::string name;
    Door * up;
    Door * down;
    Door * left;
    Door * right;


};





#endif