#pragma once
#include <string>
#include "player.h"

class quiz_list
{
private:
	int x;
	std::string quiz_name;
	std::string question[5][5];

public:
	int correct = 0;
	int perfect = 0;
	int finished = 0;
	int status = 0;
	int ans[5];
	int price = 100;
	void readquiz(int x);
	void displayquiz();
	bool status_check();
	void displayquizstatus();
	void quizplayability();
	void play_quiz();
	int correctans(int x);
};