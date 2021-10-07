#include "Factory.h"
#pragma once 
#include "player.h"
#include "Boss.h"
class CharachterFactory : public Factory{
    public: 
    Charachter*  createPlayer(){
        return new player;
    }
      Charachter*  createOpponents(){
        return new Boss;
    }
};