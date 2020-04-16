#include "Room.hpp"

int main()
{
    Door wall = Door();
    bool isOpen =1;
    Door door = Door(isOpen);
    std::string room1Text = "Room1 ";
    Room room1 = Room(std::string(room1Text), door,wall,wall,wall);

}