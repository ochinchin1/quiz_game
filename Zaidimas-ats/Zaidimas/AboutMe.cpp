#include <iostream>
#include <fstream>
#include <string>

#include "funkcijos.h"

void c2()
{
	std::string s;
	std::fstream file1;
	file1.open("Aboutgame.txt");
	for (int i = 0; i < 5; i++)
	{
		std::getline(file1, s);
		std::cout << s << std::endl;
	}

}