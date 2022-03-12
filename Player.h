#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	protected:
		char choice;
	public:
		virtual void makeMove()=0;
		char getMove();
};

#endif 
