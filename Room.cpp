#include "Room.hpp"
#include "Door.hpp"
#include <stdlib.h>
#include <stdio.h>


using std::string;



 Room::Room()
 {
    
 }
 
 void Room::setValues(string name, Door * up, Door * down, Door * left, Door * right)
 {
     this->name =  name;
     this->up = up;
     this->down = down;
     this->left = left;
     this->right = right;
 }

 string Room::checkDoor(Door * test)
 {
     if(test->isHere)
     {

         return "Door here!\n";
     }
     else
     {

         return "No Door\n";
     }
     

 }

 void Room::displayRoom()
 {
     //std::cout << "\033[0;" << 15 << "mHello!\033[0m" << std::endl;
     std::cout<<this->name<<"\n";
     std::cout<<"Up door: "<< checkDoor(this->up);
     std::cout<<"Down door: "<< checkDoor(this->down);
     std::cout<<"Left door: "<< checkDoor(this->left);
     std::cout<<"Right door: "<< checkDoor(this->right); 
     std::cout<<"\n";
     
 }