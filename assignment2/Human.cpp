#include "Human.h"
#include<iostream>
using namespace std;

Human::Human()
{
	input='R';
}

char HumanPlayer::makeMove()
{
	getline(cin, input);
}