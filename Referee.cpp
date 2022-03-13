#include "Referee.h"

using namespace std;


Referee::Referee(){

}

char Referee::refGame(Human player1, Computer player2) {
    char human_move = player1.makeMove();
    char computer_move = player2.makeMove();
    
    if (human_move=='R'){
        if (computer_move=='R') 
            return 'T';
        else if (computer_move=='P') 
            return 'L'; 
        else return 'W'; 
    } 
    else if (human_move=='P'){
        if (computer_move=='R') 
            return 'W';
        else if (computer_move=='P') 
            return 'T'; 
        else return 'W'; 
    } 
    else { 
        if (computer_move=='R') 
            return 'L';
        else if (computer_move=='P') 
            return 'W'; 
        else return 'T'; 
    }
}
