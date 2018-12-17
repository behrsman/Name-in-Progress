//Israel Baires
//Jason Chhan
//Paul Lozano
//Group Project
//CS1

#include "groupProj.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>
using namespace std;


int main() {
    bool exit = false;
    bool nimriFainted = false;
    bool chaffeyPantherFainted = false;
    nimriGen();
    
    while (exit == false){
        menuScreen(exit);
        if(exit == false){
            optionSelection(exit);
                if (exit == false){
                   
                }
        }
    }
}

