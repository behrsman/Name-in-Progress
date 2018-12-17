//Israel Baires
//Jason Chhan
//Paul Lozano
//Group Project
//CS1

#include "groupProj.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;
//////////////////////////////////////////////////////////////////////
Entities::Entities(){ // default Entities constructor. This class gives us our Player object, as well as enemy objects
    name = "N/A";
    health = 100;
}
//////////////////////////////////////////////////////////////////////
void Entities::printStats(){       ///Prints Character Stats
    cout << endl << name << "'s health is " << health << "." << endl;
}
//////////////////////////////////////////////////////////////////////
Character::Character(){ // default character constructor. This class gives us our Player object.
    name = "N/A";
    health = 100;
}
//////////////////////////////////////////////////////////////////////
void Character::printMoves(){
    cout << endl << name << "'s moves are:" << endl;
    cout << "1) " << move1 << setw (10) << "2) " << move2 << endl;
    cout << "3) " << move3 << setw (10) << "4) " << move4 << endl << endl;
}
//////////////////////////////////////////////////////////////////////
Monster::Monster(){ // Monster default constructor
    name = "N/A";
    health = 100;
}
//////////////////////////////////////////////////////////////////////
void nimriGen(){ // Generates the monster Nimri
    Monster Nimri;
    Nimri.setName("Nimri");
}
//////////////////////////////////////////////////////////////////////
void Items::printDesc(int y, string itemName) {   ////Prints Item Description
    cout << endl << "Item Name: " << itemName << endl;
    cout << description << endl;
}
//////////////////////////////////////////////////////////////////////

