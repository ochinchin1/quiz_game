#include <iostream>
#include <fstream>
#include <string>

#include "funkcijos.h"
#include "player.h"

void player::newplayer()
{
	std::cin.get();
	std::string name;

	std::cout << "Zaidejo vardas: ";
	std::cin >> name;
	player_name = name;
	experience = 0;
	level = 1;
	score = 0;
}