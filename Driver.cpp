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


    //doors and walls
    Door * wall = new Door(0);

    //room 1
    Door * door1to2 = new Door(room2);
    Door * door1to15 = new Door(room15);
    //room 2
    Door * door2to1 = new Door(room1);
    Door * door2to3 = new Door(room3);
    Door * door2to11 = new Door(room11);
    //room3
    Door * door3to4 = new Door(room4);
    Door * door3to2 = new Door(room2);
    //room4
    Door * door4to5 = new Door(room5);
    Door * door4to8 = new Door(room8);
    Door * door4to3 = new Door(room3);
    //room5
    Door * door5to4 = new Door(room4);
    Door * door5to6 = new Door(room6);
    //room6
    Door * door6to5 = new Door(room5);
    Door * door6to7 = new Door(room7);
    //room7
    Door * door7to6 = new Door(room6);
    //room8
    Door * door8to4 = new Door(room4);
    Door * door8to9 = new Door(room9);
    //room9
    Door * door9to8 = new Door(room8);
    Door * door9to10 = new Door(room10);
    //room10
    Door * door10to9 = new Door(room9);
    //room11
    Door * door11to2 = new Door(room2);
    Door * door11to12 = new Door(room12);
    //room12
    Door * door12to11 = new Door(room11);
    Door * door12to13 = new Door(room13);
    //room 13
    Door * door13to12 = new Door(room12);
    Door * door13to14 = new Door(room14);
    //room 14
    Door * door14to13 = new Door(room13);
    //room 15
    Door * door15to1 = new Door(room1);


    //setting values of rooms
    room1->setValues("Room 1\n", door1to2,wall,door1to15,wall);
    room2->setValues("Room 2\n", door2to3,door2to1,door2to11,wall);
    room3->setValues("Room 3\n", door3to4,door3to2,wall,wall);
    room4->setValues("Room 4\n", door4to5,door4to3,wall,door4to8);
    room5->setValues("Room 5\n", wall,door5to4,door5to6,wall);
    room6->setValues("Room 6\n", wall,wall,door6to7,door6to5);
    room7->setValues("Room 7, Dead end.\n", wall,wall,wall,door7to6);
    room8->setValues("Room 8\n", wall,door8to9,door8to4,wall);
    room9->setValues("Room 9\n", door9to8,door9to10,wall,wall);
    room10->setValues("Room 10, Dead end.\n", door10to9,wall,wall,wall);
    room11->setValues("Room 11\n", door11to12,wall,wall,door11to2);
    room12->setValues("Room 12\n", wall,door12to11,door12to13,wall);
    room13->setValues("Room 13\n", wall,door13to14,wall,door13to12);
    room14->setValues("Room 14, you found the treasure!\n", door14to13,wall,wall,wall);
    room15->setValues("Room 15, Dead end.\n", wall,wall,wall,door15to1);

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
        else if (input == 'w')
        {
            /* code */
            std::cout<<Collin->tryToLeave(input);
        }
        else if(input == 's')
        {
            std::cout<<Collin->tryToLeave(input);
        }
        else if(input == 'a')
        {
            std::cout<<Collin->tryToLeave(input);
        }
        else if(input == 'd')
        {
            std::cout<<Collin->tryToLeave(input);
        }
        
    }

}