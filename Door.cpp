#include "Door.hpp"
#include "Room.hpp"


Door::Door(Room * nextRoom)
{
    if(nextRoom)
    {
    this->isHere = 1;
    this->nextRoom = nextRoom;
    }
    else
    {
        this->isHere = 0;
        //this->nextRoom = 0;
    }
    

}

// Door::Door()
// {
//     this->isHere = 0;
//     this->nextRoom = 0;
// }


