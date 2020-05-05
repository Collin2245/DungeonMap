#ifndef Student_hpp
#define Student_hpp

#include <string>
#include "Item.hpp"
using namespace std;

class Room;
class Student
{
    private:
        string name;
        Room* currentRoom;
        Item** backpack;

    public:
        int maxItemCount;
        int currentItemCount;
        Student(string name);
        void displayBackpackContents();
        bool addItem(Item* anItem);
        string getName();
        Room* getCurrentRoom();
        void setCurrentRoom(Room* aRoom);
        Item * getOldestItem();
};

#endif