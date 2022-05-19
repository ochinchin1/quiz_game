#include <iostream>
#include <fstream>
#include <string>

#include "funkcijos.h"
#include "quiz.h"
#include "player.h"

void quiz_list::readquiz(int x)
{
	std::fstream f1, f2, f3, f4, f5;
	f1.open("General_Quiz.txt");
	f2.open("History_quiz.txt");
	f3.open("Geography_quiz.txt");
	f4.open("Biology_quiz.txt");
	f5.open("Lithuanian_quiz.txt");
	for (int i = 0; i < 5; i++)
	{
		if (x == 1)
		{
			ans[0] = 3;
			ans[1] = 3;
			ans[2] = 3;
			ans[3] = 4;
			ans[4] = 2;
			std::getline(f1, quiz_name);
			x = 0;
			for (int i = 0; i < 5; i++)
			{
				status = 1;
				std::getline(f1, question[i][0]);
				for (int j = 1; j < 5; j++)
				{
					std::getline(f1, question[i][j]);
				}
			}
		}
		if (x == 2)
		{
			ans[0] = 1;
			ans[1] = 3;
			ans[2] = 3;
			ans[3] = 1;
			ans[4] = 3;
			std::getline(f2, quiz_name);
			x = 0;
			for (int i = 0; i < 5; i++)
			{
				status = 0;
				std::getline(f2, question[i][0]);
				for (int j = 1; j < 5; j++)
				{
					std::getline(f2, question[i][j]);
				}
			}
		}
		if (x == 3)
		{
			ans[0] = 1;
			ans[1] = 2;
			ans[2] = 2;
			ans[3] = 3;
			ans[4] = 3;
			std::getline(f3, quiz_name);
			x = 0;
			for (int i = 0; i < 5; i++)
			{
				status = 0;
				std::getline(f3, question[i][0]);
				for (int j = 1; j < 5; j++)
				{
					std::getline(f3, question[i][j]);
				}
			}
		}
		if (x == 4)
		{
			ans[0] = 1;
			ans[1] = 2;
			ans[2] = 1;
			ans[3] = 3;
			ans[4] = 3;
			std::getline(f4, quiz_name);
			x = 0;
			for (int i = 0; i < 5; i++)
			{
				status = 0;
				std::getline(f4, question[i][0]);
				for (int j = 1; j < 5; j++)
				{
					std::getline(f4, question[i][j]);
				}
			}
		}if (x == 5)
		{
			ans[0] = 2;
			ans[1] = 2;
			ans[2] = 4;
			ans[3] = 3;
			ans[4] = 4;
			std::getline(f5, quiz_name);
			x = 0;
			for (int i = 0; i < 5; i++)
			{
				status = 0;
				std::getline(f5, question[i][0]);
				for (int j = 1; j < 5; j++)
				{
					std::getline(f5, question[i][j]);
				}
			}
		}
	}
}
void quiz_list::displayquiz()
{
	/*for (int z = 0; z < 5; z++)
	{*/
		std::cout << quiz_name << std::endl;
		//	for (int i = 0; i < 5; i++)
		//	{
		//		std::cout << "Question: " << question[i][0] << std::endl;
		//		std::cout << "Answers:\n";
		//		for (int j = 1; j < 5; j++)
		//		{
		//			std::cout << question[i][j] << std::endl;
		//		}
		//	}
		//}
}
bool quiz_list::status_check()
{
	if (status == 1)
	{
		return true;
	}
	else if(status == 0)
	{
		return false;
	}
}
void quiz_list::displayquizstatus()
{
	if (status_check() == false)
	{
		std::cout << quiz_name << "([Available] : Cost - 100)" << std::endl;
	}
	else if (status_check() == true)
	{
		std::cout << quiz_name << " (SOLD)" <<std::endl;
	}
}
void quiz_list::quizplayability()
{
	if (status_check() == true)
	{
		if (finished == 0)
		{
			std::cout << quiz_name << "(NEW)" << std::endl;
		}
		else
		{
			std::cout << quiz_name << "(Finished)" << std::endl;
		}
	}
	else if (status_check() == false)
	{
		std::cout << quiz_name << " (SOLD AT THE SHOP)" << std::endl;
	}
}
