#include <iostream>
#include "Charachter.h"
#pragma once 
class player : public Charachter{
    public:
    void draw() {
        std::cout << "Draw player" << std::endl;
    }
};