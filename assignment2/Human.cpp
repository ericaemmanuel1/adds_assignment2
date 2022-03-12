#include "Human.h"

#include<iostream>

using namespace std;

HumanPlayer::HumanPlayer()
{
	choice='R';
}

void HumanPlayer::makeMove()
{
	cin>>choice;
}
