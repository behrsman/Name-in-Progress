//Class Methods and functions
#ifndef groupProj_hpp
#define groupProj_hpp
#include <iostream>
#include <stdio.h>
#include <string>
#endif /* groupProj_hpp */
#include <iomanip>
using namespace std;

class Entities {
protected:
    string name;
    int health;
    //can add other stats later once we actually finish the game or the project is over lol
public:
    void setName(string x) { name = x; };
    string getName() { return name;};
    void setHealth(int x) { health = x; }; //sets health
    int  getHealth()      { return health; }; // displayes health
    void addHealth(int x) { health += x; }; // adds health
    void subHealth(int x) { health -= x; }; //Subtracts Health
    void printStats(); //prints Entity stats
    Entities();
};
//////////////////////////////////////////////////////////////////////////////////////////////
class Character : public Entities{
protected:
    string weaponEquipped;
    int weapDmg;
    string move1 = "Kick";
    string move2 = "Punch";
    string move3 = "Headbutt";
    string move4 = "Scratch";
public:
    void printInventory();
    int selectItem(string x);
    void equipItem(string x);
    void printMoves();
    Character();
};
////////////////////////////////////////////////////////////////////////////////////////////////
class Monster : public Entities{
protected:
    //string attack;
public:
    Monster();
};
////////////////////////////////////////////////////////////////////////////////////////////////
class Items {
protected:
    const int TYPE;
    int hpValue;
    int dmgValue;
    string description;
public:
    int getType() { return TYPE; };
    int gethpValue() { return hpValue; };
    int getdmgValue() { return dmgValue; };
    void printDesc(int y, string itemName);
    Items();
};


////////////////////////////////////////MENU FUNCTIONS//////////////////////////////////////
bool menuScreen(bool &exit);// Menu screen. Begins game and sets players name.
void printBoard(); //Prints the board
void optionSelection(bool &exit); // Lets you choose what to do in game
void inBattleMoveselection();
void battle();


///////////////////////////////MONSTER GENERATORS/////////////////////////////////////////////////////
void nimriGen(); // Generates the monster Nimri
