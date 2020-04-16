#include "Room.hpp"
using std::string;

 Room::Room(string name, Door * up, Door * down, Door * left, Door * right)
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
         string returnVal ="Door here\n!";
         return string(returnVal, 12);
     }
     else
     {
         std::string returnVal ="No Door\n";
         return std::string(returnVal,9);
     }
     

 }

 void Room::displayRoom()
 {
     std::cout<<this->name;
     std::cout<<"Up door:"<< checkDoor(this->up);
     std::cout<<"Down door:"<< checkDoor(this->down);
     std::cout<<"Left door:"<< checkDoor(this->left);
     std::cout<<"Right door:"<< checkDoor(this->right); 
     
 }