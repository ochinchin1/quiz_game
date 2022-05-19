#include <iostream>
#include <fstream>

#include "funkcijos.h"
#include "player.h"
#include "quiz.h"
#include "achievment.h"

void c1()
{
	player p1;
	p1.newplayer();
	p1.score = 100;

	achievment a1;
	a1.read();

	quiz_list q1;
	quiz_list q2;
	quiz_list q3;
	quiz_list q4;
	quiz_list q5;
	q1.readquiz(1);
	q2.readquiz(2);
	q3.readquiz(3);
	q4.readquiz(4);
	q5.readquiz(5);

	int c1x;
	int c1temp = 8;
	while (c1temp != 0)
	{
		c1temp = 0;
		gamemeniu();
		std::cin >> c1x;
		if (c1x == 1)
		{
			int temp = 13;
			std::cout << "CHOOSE YOUR QUIZ\n";
			std::cout << "-----------------------\n";
			std::cout << "1.";
			q1.quizplayability();
			std::cout << "2.";
			q2.quizplayability();
			std::cout << "3.";
			q3.quizplayability();
			std::cout << "4.";
			q4.quizplayability();
			std::cout << "5.";
			q5.quizplayability();

			while (temp != 0)
			{
				std::cin >> temp;
				if (temp == 1)
				{
					if (q1.status_check() == true && q1.finished == 0 || p1.score < 100 && q2.finished == 1 || p1.score < 100 && q3.finished == 1 || p1.score < 100 && q4.finished == 1 || p1.score < 100 && q5.finished == 1)
					{
						q1.play_quiz();
						q1.finished = 1;
						if (q1.correct == 5)
						{
							p1.streak++;
							q1.perfect = 1;
						}
						p1.score += q1.correct * 30;
						p1.experience += q1.correct * 10;
						if (p1.experience >= 100*0.5*p1.level)
						{
							p1.experience -= 100* 0.5 * p1.level;
							p1.level++;
						}
						//-----Achievment checks-----------
						if (q1.finished == 1 && a1.status[0] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[0] << "\n\n";
							a1.status[0] = 1;
						}
						if (q1.finished == 1 && q2.finished == 1 && q3.finished == 1 && q4.finished == 1 && q5.finished == 1 && a1.status[1] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[1] << "\n\n";
							a1.status[1] = 1;
						}
						if (q1.perfect == 1 && a1.status[2] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[2] << "\n\n";
							a1.status[2] = 1;
						}
						if (q1.perfect == 1 && q2.perfect == 1 && q3.perfect == 1 && q4.perfect == 1 && q5.perfect == 1 && a1.status[3] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[3] << "\n\n";
							a1.status[3] = 1;
						}
						if (p1.level >= 3 && a1.status[4] == 0)
							{
								std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[4] << "\n\n";
								a1.status[4] = 1;
							}
						//-----------------------------------
						q1.correct = 0;
					}
					else if (q1.status_check() == false)
					{
						std::cout << "Labdara neuzsimineju, eik nusipirk quiza\n";
					}
					else if (q1.finished && p1.score >= 100)
					{
						std::cout << "You completed this quiz, time to move on man.\n";
					}
				}
				if (temp == 2)
				{
					if (q2.status_check() == true)
					{
						q2.play_quiz();
						if (q2.correct == 5)
						{
							p1.streak++;
							q2.perfect = 1;
						}
						q2.finished = 1;
						p1.score += q2.correct * 20;
						p1.experience += q2.correct * 10;
						if (p1.experience >= 100 * 0.5 * p1.level)
						{
							p1.experience -= 100 * 0.5 * p1.level;
							p1.level++;
						}
						q2.correct = 0;
						//-----Achievment check-----------------
						if (q2.finished == 1 && a1.status[0] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[0] << "\n\n";
							a1.status[0] = 1;
						}
						if (q1.finished == 1 && q2.finished == 1 && q3.finished == 1 && q4.finished == 1 && q5.finished == 1 && a1.status[1] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[1] << "\n\n";
							a1.status[1] = 1;
						}
						if (q2.perfect == 1 && a1.status[2] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[2] << "\n\n";
							a1.status[2] = 1;
						}
						if (q1.perfect == 1 && q2.perfect == 1 && q3.perfect == 1 && q4.perfect == 1 && q5.perfect == 1 && a1.status[3] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[3] << "\n\n";
							a1.status[3] = 1;
						}
						if (p1.level >= 3 && a1.status[4] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[4] << "\n\n";
							a1.status[4] = 1;
						}
						//--------------------------------------
					}
					else if (q2.status_check() == false)
					{
						std::cout << "Labdara neuzsimineju, eik nusipirk quiza\n";
					}
				}
				if (temp == 3)
				{
					if (q3.status_check() == true)
					{
						q3.play_quiz();
						if (q3.correct == 5)
						{
							p1.streak++;
							q3.perfect = 1;
						}
						q3.finished = 1;
						p1.score += q3.correct * 20;
						p1.experience += q3.correct * 10;
						if (p1.experience >= 100 * 0.5 * p1.level)
						{
							p1.experience -= 100 * 0.5 * p1.level;
							p1.level++;
						}
						q3.correct = 0;
						//--------achievment check------------
						if (q3.finished == 1 && a1.status[0] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[0] << "\n\n";
							a1.status[0] = 1;
						}
						if (q1.finished == 1 && q2.finished == 1 && q3.finished == 1 && q4.finished == 1 && q5.finished == 1 && a1.status[1] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[1] << "\n\n";
							a1.status[1] = 1;
						}
						if (q3.perfect == 1 && a1.status[2] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[2] << "\n\n";
							a1.status[2] = 1;
						}
						if (q1.perfect == 1 && q2.perfect == 1 && q3.perfect == 1 && q4.perfect == 1 && q5.perfect == 1 && a1.status[3] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[3] << "\n\n";
							a1.status[3] = 1;
						}
						if (p1.level >= 3 && a1.status[4] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[4] << "\n\n";
							a1.status[4] = 1;
						}
						//----------------------------------------------
					}
					else if (q3.status_check() == false)
					{
						std::cout << "Labdara neuzsimineju, eik nusipirk quiza\n";
					}
				}
				if (temp == 4)
				{
					if (q4.status_check() == true)
					{
						q4.play_quiz();
						if (q4.correct == 5)
						{
							p1.streak++;
							q4.perfect = 1;
						}
						q4.finished = 1;
						p1.score += q4.correct * 20;
						p1.experience += q4.correct * 10;
						if (p1.experience >= 100 * 0.5 * p1.level)
						{
							p1.experience -= 100 * 0.5 * p1.level;
							p1.level++;
						}
						q4.correct = 0;
						//------------------------
						if (q1.finished == 1 && a1.status[0] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED - " << a1.name[0] << "]\n\n";
							a1.status[0] = 1;
						}
						if (q1.finished == 1 && q2.finished == 1 && q3.finished == 1 && q4.finished == 1 && q5.finished == 1 && a1.status[1] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[1] << "\n\n";
							a1.status[1] = 1;
						}
						if (q4.perfect == 1 && a1.status[2] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[2] << "\n\n";
							a1.status[2] = 1;
						}
						if (q1.perfect == 1 && q2.perfect == 1 && q3.perfect == 1 && q4.perfect == 1 && q5.perfect == 1 && a1.status[3] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[3] << "\n\n";
							a1.status[3] = 1;
						}
						if (p1.level >= 3 && a1.status[4] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[4] << "\n\n";
							a1.status[4] = 1;
						}
						//---------------------------------------------------
					}
					else if (q4.status_check() == false)
					{
						std::cout << "Labdara neuzsimineju, eik nusipirk quiza\n";
					}
				}
				if (temp == 5)
				{
					if (q5.status_check() == true)
					{
						q5.play_quiz();
						if (q5.correct == 5)
						{
							p1.streak++;
							q5.perfect = 1;
						}
						q5.finished = 1;
						p1.score += q5.correct * 20;
						p1.experience += q5.correct * 10;
						if (p1.experience >= 100 * 0.5 * p1.level)
						{
							p1.experience -= 100 * 0.5 * p1.level;
							p1.level++;
						}
						q5.correct = 0;
						//----------------------------------------------------------------------
						if (q5.finished == 1 && a1.status[0] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[0] << "\n\n";
							a1.status[0] = 1;
						}
						if (q1.finished == 1 && q2.finished == 1 && q3.finished == 1 && q4.finished == 1 && q5.finished == 1 && a1.status[1] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[1] << "\n\n";
							a1.status[1] = 1;
						}
						if (q5.perfect == 1 && a1.status[2] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[2] << "\n\n";
							a1.status[2] = 1;
						}
						if (q1.perfect == 1 && q2.perfect == 1 && q3.perfect == 1 && q4.perfect == 1 && q5.perfect == 1 && a1.status[3] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[3] << "\n\n";
							a1.status[3] = 1;
						}
						if (p1.level >= 3 && a1.status[4] == 0)
						{
							std::cout << "[ACHIEVMENT UNLOCKED] " << a1.name[4] << "\n\n";
							a1.status[4] = 1;
						}
						//-----------------------------------------------------------
					}
					else if (q5.status_check() == false)
					{
						std::cout << "Labdara neuzsimineju, eik nusipirk quiza\n";
					}
				}

			}
		}
		if (c1x == 2)
		{
			if (q2.status_check() == true && q3.status_check() == true && q4.status_check() == true && q5.status_check() == true)
			{
				std::cout << "Parduotuve tuscia\n";
			}
			else
			{
				std::cout << "Pasirinkite quiz kuri norit pirkti(Jei norite grizti atgal, spauskite 0)\n";
				int temp = 9;
				while (temp != 0)
				{
					std::cout << "1.";
					q2.displayquizstatus();
					std::cout << "2.";
					q3.displayquizstatus();
					std::cout << "3.";
					q4.displayquizstatus();
					std::cout << "4.";
					q5.displayquizstatus();
					std::cout << "----------------*NOTE* press '0' to go back-----------------------------\n";
					std::cin >> temp;
						if (temp == 1)
						{
							if (p1.score >= q2.price)
							{
								q2.status = 1;
								p1.score -= q2.price;
							}
							else if (p1.score < q2.price)
							{
								std::cout << "[[INSUFFICIENT FUNDS]]\n";
							}
							 
						}
						if (temp == 2)
						{
							if (p1.score >= q3.price)
							{
								q3.status = 1;
								p1.score -= q3.price;
							}
							else if (p1.score < q3.price)
							{
								std::cout << "[[INSUFFICIENT FUNDS]]\n";
							}
						}
						if (temp == 3)
						{
							if (p1.score >= q4.price)
							{
								q4.status = 1;
								p1.score -= q4.price;
							}
							else if (p1.score < q4.price)
							{
								std::cout << "[[INSUFFICIENT FUNDS]]\n";
							}
						}
						if (temp == 4)
						{
							if (p1.score >= q5.price)
							{
								q5.status = 1;
								p1.score -= q5.price;
							}
							else if (p1.score < q5.price)
							{
								std::cout << "[[INSUFFICIENT FUNDS]]\n";
							}
						}
				
				}
			}
		}
		if (c1x == 3)
		{
			p1.showplayer();
			std::cout << std::endl;
		}
		if (c1x == 4)
		{
			a1.out();
		}
		if (q1.finished == 1 && q2.finished == 1 && q3.finished == 1 && q4.finished == 1 && q5.finished == 1)
		{
			std::cout << "Congratulations on finishing the game!\nYour score is: " << p1.score * p1.streak * p1.level << std::endl;
			break;
		}
		c1temp = c1x;
	}
}