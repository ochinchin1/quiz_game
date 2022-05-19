#include <iostream>
#include <fstream>
#include <string>

#include "funkcijos.h"
#include "player.h"
#include "quiz.h"

int shop(player x, quiz_list y)
{
	if (x.score >= y.price)
	{
		return y.status = 1;
		return x.score -= y.price;
	}
	else if (x.score < y.price)
	{
		std::cout << "[[INSUFFICIENT FUNDS]]\n";
	}

}