
#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include "./include/CharachterFactory.h"
#include "./include/Factory.h"
#include "./include/Charachter.h"




int main()
{
	
	Factory* factory = new CharachterFactory; 
	std::vector<Charachter*> charachters;
	charachters.push_back(factory->createPlayer());
	charachters.push_back(factory->createOpponents());
	int size =  charachters.size();
	for(int i = 0; i < size ; i++)
	{
		charachters[i]->draw();
	}

	return 0;
}
