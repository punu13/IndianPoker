#pragma once
#include "cards.h"
#include "players.h"
#include <iostream>
class game
{
public:
	game();		//default constructor
	~game();	//default Destructor
	void start(); //start command
	void exit();//exit command

private:
	void initgame(); 
};

