#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class HumanPlayer : public Player 
{    
	public:     
		HumanPlayer();   
		virtual void makeMove();
};

#endif
