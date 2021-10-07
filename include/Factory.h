#include "Charachter.h"
#pragma once 
class Factory {
    public:
     virtual Charachter* createPlayer() = 0;
      virtual Charachter* createOpponents() = 0;
};