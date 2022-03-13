#include "Referee.h"

using namespace std;


Referee::Referee(){

}

char Referee::refGame(Human player1, Computer player2) {
    char human_move = player1.makeMove();
    char computer_move = player2.makeMove();
    //as computer always plays 'R' we can remove 'other if statement'
    if (human_move=='R'){
        if (computer_move=='R') return 'T';
        else if (computer_move=='P') return 'L'; //'other if statement'
        else return 'W'; //'other if statement'
    } else if (human_move=='P'){
        if (computer_move=='R') return 'W';
        else if (computer_move=='P') return 'T'; //'other if statement'
        else return 'W'; //'other if statement'
    } else { //for player move == 'S'
        if (computer_move=='R') return 'L';
        else if (computer_move=='P') return 'W'; //'other if statement'
        else return 'T'; //'other if statement'
    }
}
