// Game Operations
#include "groupProj.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

bool menuScreen(bool &exit) {
    string response;
    cout << right << setw(34) << "Welcome to [GAME TITLE]" << endl << "---------------------------------------------" << endl;
    cout << right << setw(20) << "1) Play" << right << setw(10) << "2) Quit" << endl;
    while (((response != "1") && (response != "2"))) {
        cout << "->";
        cin >> response;
        if (response == "1") {
            Character Player;
            //get player's name
            cout << "\nLets begin!\nName your character: ";
            cin >> response;
            Player.setName(response);
            Player.printStats();
            Player.printMoves();
            //move on to gameplay
            return exit;
        }
        else if (response == "2") {//quits program
            exit = true;
            break;
        }
    }
    return exit;
}
//////////////////////////////////////////////////////////////////////
void printBoard() {
    string map[7][7] = { {"[]", "[]", "[]", "[]", "[]", "[]", "[]"},
        {"[]", "[]", "[]", "[]", "[]", "[]", "[]"},
        {"[]", "[]", "[]", "[]", "[]", "[]", "[]"},
        {"[]", "[]", "[]", "[]", "[]", "[]", "[]"},
        {"[]", "[]", "[]", "[]", "[]", "[]", "[]"},
        {"[]", "[]", "[]", "[]", "[]", "[]", "[]"},
        {"[]", "[]", "[]", "[]", "[]", "[]", "[]"} };
    for (int i = 0; i < 7; i++) {
        cout << "  " << map[i][0] << "  " << map[i][1] << "  " << map[i][2]
        << "  " << map[i][3] << "  " << map[i][4] << "  " << map[i][5]
        << "  " << map[i][6] << endl << endl;
    }
};
//////////////////////////////////////////////////////////////////////
void optionSelection(bool &exit){
    int selection = 0;
    cout << "What would you like to do?\n";
    cout << "1) Battle " << right << setw (10) << "2) Exit Game \n";
    while (((selection != 2) && (selection != 2))) {
        cout << "->";
        cin >> selection;
        if (selection == 1) {
           
        }
        else exit = true;
    }
}
