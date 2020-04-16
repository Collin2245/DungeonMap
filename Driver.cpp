#include "Room.hpp"
#include <string>
#include <iostream>
using std::string;
int main()
{
    Door * wall = new Door();
    bool isOpen =1;
    Door * door = new Door(isOpen);

    Room room1 =   Room("Room 1\n", door,wall,wall,wall);

    room1.displayRoom();

}