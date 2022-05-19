#pragma once

class player
{
private:
public:
	int streak = 0;
	std::string player_name;
	int score;
	int level;
	double experience;
	void newplayer();
	void showplayer();
};
