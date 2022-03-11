#include "Referee.h"
using namespace std;
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

char Referee::refGame(Human p1,Computer p2)
{
Human you;
    you.play();
    string your_input = you.get();
    int num = your_input[0] - '0';
    for (int i= 1; i<=num; i++) {
        Computer ai;
        ai.play();
        string ai_input = ai.get();
        if (your_input[i*2] == ai_input[0]) {
            cout<<"T";
        } else if (((your_input[i*2] == 'R')&&(ai_input[0]=='S'))||((your_input[i*2] == 'P')&&(ai_input[0]=='R'))||((your_input[i*2] == 'S')&&(ai_input[0]=='P'))) {
            cout<<"W";
        } else {
           cout<<"L";
        }

        if (i != num) {
          cout<<" ";
        }
    }
    cout<<endl;
}