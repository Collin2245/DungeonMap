#ifndef Student_hpp
#define Student_hpp
#include <iostream>
#include <stdlib.h>
#include <string>


class Room;
class Door;

class Student
{
private:
    //Door * doorToLeave;
    Room * currentRoom;


public:
    Student(Room * currentRoom);
    std::string tryToLeave(char  direction);
    Room * otherRoom(Door * currentDoor);


};


#endif