#include <string>
#include <iostream>

#include "funkcijos.h"
#include "player.h"
#include "quiz.h"

void quiz_list::play_quiz()
{
	std::cout << "---------------\n";
	for (int i = 0; i < 5; i++)
	{
		int temp;
		std::cout << "Question: " << question[i][0] << std::endl;
		std::cout << "Answers:\n";
		for (int j = 1; j < 5; j++)
		{
			std::cout << question[i][j] << std::endl;
		}
		std::cin >> temp;
		if (ans[i] == temp)
		{
			correct++;
		}

	}
	std::cout << "Congrats! You finished the quiz. You got " << correct << " questions right out of possible 5\n";
	std::cout << "Money earned: " << correct * 20 << std::endl;
	std::cout << "Experience earned: " << correct * 10 << std::endl;
	std::cout << "------------------------Press 0 to continue----------------------------\n";
}