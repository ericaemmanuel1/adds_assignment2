#ifndef COMPUTER_H
#define COMPUTER_H
#include "Human.h"
#include <string>
#include <iostream>

class Computer : public Human{
    public:
    Computer(); // constructor
    char makeMove();
};

#endif