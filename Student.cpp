#include "student.hpp"
#include "Door.hpp"
#include "Room.hpp"
#include <stdlib.h>

using std::string;

Student::Student(Room * currentRoom)
{
    this->currentRoom = currentRoom;
}

string Student::tryToLeave(char direction)
{
    if(direction == 'w')
    {
        if(this->currentRoom->up->isHere)
        {
            this->currentRoom = this->currentRoom->up->nextRoom;
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
            this->currentRoom = this->currentRoom->down->nextRoom;
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
            this->currentRoom = this->currentRoom->left->nextRoom;
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
            this->currentRoom = this->currentRoom->right->nextRoom;
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