#include <iostream>
#include <fstream>
#include <string>

#include "player.h"

void player::showplayer()
{
	std::cout << "Zaidejo vardas: " << player_name << std::endl;
	std::cout << "Zaidejo lygis: " << level << std::endl;
	std::cout << "Patirtis: " << experience << "/" << 100 * 0.5 * level << std::endl;
	std::cout << "Pinigai: " << score << std::endl;
}