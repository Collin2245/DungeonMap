#include "Door.hpp"
#include "Room.hpp"


Door::Door(Room * room1, Room * room2)
{
 
    this->isHere = 1;
    this->room1 = room1;
    this->room2 = room2;

}

Door::Door()
{
    this->isHere = 0;

}


