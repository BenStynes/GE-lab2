#include <iostream>
#include "Charachter.h"
#pragma once 
class Boss : public Charachter{
    public:
    void draw() {
        std::cout << "Draw Boss" << std::endl;
    }
};