#include <iostream>
#include <fstream>
#include <string>

#include "funkcijos.h"
#include "player.h"
#include "quiz.h"
#include "achievment.h"

void achievment::read()
{
	std::fstream f1;
	f1.open("Achievments.txt");
	for (int i = 0; i < 5; i++)
	{
		std::getline(f1, name[i]);
		status[i] = 0;
	}
}
void achievment::out()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << name[i] << " ";
		if (status[i] == 0)
		{
			std::cout << "[[NOT ACHIEVED]]\n";
		}
		else if (status[i] == 1)
		{
			std::cout << "[[ACHIEVED]]\n";
		}
	}
}