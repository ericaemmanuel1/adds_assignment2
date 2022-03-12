#include "Referee.h"

using namespace std;


char Referee::refGame(HumanPlayer p1,ComputerPlayer p2)
{	
	p1.makeMove();
	p2.makeMove();
	char m1=p1.getMove(),m2=p2.getMove();
	if((m1 == m2 ))
	{
		return 'T';
	}
	if( ( m1 == 'R' && m2 == 'S')||( m1 == 'P' && m2 == 'R')||( m1 == 'S' && m2 == 'P') )
	{
		return 'W';
	}
	else
	{	
		return 'L';
	}
	return 'A';
}
