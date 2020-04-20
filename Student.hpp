#ifndef Student_hpp
#define Student_hpp
#include <iostream>
#include <stdlib.h>
#include <string>


class Room;

class Student
{
private:
    //Door * doorToLeave;
    Room * currentRoom;


public:
    Student(Room * currentRoom);
    std::string tryToLeave(char  direction);


};


#endif