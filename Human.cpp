#include "Human.h"

#include<iostream>

using namespace std;

Human::Human()
{

}

char Human::makeMove()
{
	std::cout<<"Enter move: ";
    char option;
    std::cin>>option;
    return option;
}

