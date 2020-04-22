#include "Room.hpp"
#include <string>
#include <iostream>
#include "Door.hpp"
#include "Student.hpp"

using std::string;
int main()
{

    //rooms
    Room * room1 = new Room();
    Room * room2 = new Room();
    Room * room3 = new Room();
    Room * room4 = new Room();
    Room * room5 = new Room();
    Room * room6 = new Room();
    Room * room7 = new Room();
    Room * room8 = new Room();
    Room * room9 = new Room();
    Room * room10 = new Room();
    Room * room11 = new Room();
    Room * room12 = new Room();
    Room * room13 = new Room();
    Room * room14 = new Room();
    Room * room15 = new Room();


    // Room * map;
    // map = new Room[20];
    // map[0] = room1;

    // map[0]->displayRoom();


    //doors and walls
    Door * wall = new Door();

    //new doors
    //room 1
    Door * door1to2 = new Door(room1,room2);
    Door * door1to15 = new Door(room1,room15);
    //room 2
    Door * door2to3 = new Door(room2,room3);
    Door * door2to11 = new Door(room2,room11);
    //room3
    Door * door3to4 = new Door(room3,room4);
    //room4
    Door * door4to5 = new Door(room4,room5);
    Door * door4to8 = new Door(room4,room8);
    //room5
    Door * door5to6 = new Door(room5,room6);
    //room6
    Door * door6to7 = new Door(room6,room7);
    //room7
    //room8
    Door * door8to9 = new Door(room8,room9);
    //room9
    Door * door9to10 = new Door(room9,room10);
    //room10
    //room11
    Door * door11to12 = new Door(room11,room12);
    //room12
    Door * door12to13 = new Door(room12,room13);
    //room 13
    Door * door13to14 = new Door(room13,room14);
    //room 14
    //room 15


    Room * map;
    map = new Room [20*sizeof(Room)];
    map[0] = * room1;
    map[0].displayRoom();



    //setting values of rooms
    room1->setValues("Room 1\n", door1to2,wall,door1to15,wall);
    room2->setValues("Room 2\n", door2to3,door1to2,door2to11,wall);
    room3->setValues("Room 3\n", door3to4,door2to3,wall,wall);
    room4->setValues("Room 4\n", door4to5,door3to4,wall,door4to8);
    room5->setValues("Room 5\n", wall,door4to5,door5to6,wall);
    room6->setValues("Room 6\n", wall,wall,door6to7,door5to6);
    room7->setValues("Room 7, Dead end.\n", wall,wall,wall,door6to7);
    room8->setValues("Room 8\n", wall,door8to9,door4to8,wall);
    room9->setValues("Room 9\n", door8to9,door9to10,wall,wall);
    room10->setValues("Room 10, Dead end.\n", door9to10,wall,wall,wall);
    room11->setValues("Room 11\n", door11to12,wall,wall,door2to11);
    room12->setValues("Room 12\n", wall,door11to12,door12to13,wall);
    room13->setValues("Room 13\n", wall,door13to14,wall,door12to13);
    room14->setValues("Room 14, you found the treasure!\n", door13to14,wall,wall,wall);
    room15->setValues("Room 15, Dead end.\n", wall,wall,wall,door1to15);

    //room1->displayRoom();
    //room2->displayRoom();

    Student * Collin = new Student(room1);
    room1->displayRoom();
    while(1==1)
    {
        char input;
        std::cout<<"Please enter w, a, s, or d to traverse the dungeon. Enter q to quit\n";
        std::cin>>input;
        if(input == 'q')
        {
            break; 
        }
        else
        {
            std::cout<<Collin->tryToLeave(input);
        }    
    }

}