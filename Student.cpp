#include "student.hpp"
#include "Door.hpp"
#include "Room.hpp"
#include <stdlib.h>

using std::string;

Student::Student(Room * currentRoom)
{
    this->currentRoom = currentRoom;
}

Room * Student::otherRoom(Door * currentDoor)
{
    if(currentDoor->room1 == this->currentRoom)
    {
        return currentDoor->room2;
    }
    else
    {
        return currentDoor->room1;
    }
    
}

string Student::tryToLeave(char direction)
{
    if(direction == 'w')
    {
        if(this->currentRoom->up->isHere)
        {
            this->currentRoom = this->otherRoom(this->currentRoom->up);
                        std::cout<<"#############################################################\n";

            this->currentRoom->displayRoom();

            return "In new room\n";
        }
        else
        {
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "No door here\n";
        }
    }
    else if(direction == 's')
    {
        if(this->currentRoom->down->isHere)
        {
            this->currentRoom = this->otherRoom(this->currentRoom->down);
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "In new room\n";
        }
        else
        {
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "No door here\n";

        } 
    }
    else if(direction == 'a')
    {
        if(this->currentRoom->left->isHere)
        {
            this->currentRoom = this->otherRoom(this->currentRoom->left);
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "In new room\n";
        }
        else
        {
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "No door here\n";
        }
    }
    else if(direction == 'd')
    {
        if(this->currentRoom->right->isHere)
        {
            this->currentRoom = this->otherRoom(this->currentRoom->right);
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "In new room\n";
        }
        else
        {
            std::cout<<"#############################################################\n";
            this->currentRoom->displayRoom();
            return "No door here\n";

        }
    }
    else
    {
        std::cout<<"#############################################################\n";
        this->currentRoom->displayRoom();
        return "Error input";
    }
    
}