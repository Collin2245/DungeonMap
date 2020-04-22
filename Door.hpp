#ifndef Door_hpp
#define Door_hpp


class Room;
class Door
{

private:



public:
    bool isHere;
    //Room * nextRoom;
    //Door();
    Door(Room * room1, Room * room2);
    Door();
    Room * room1;
    Room * room2;


};

#endif