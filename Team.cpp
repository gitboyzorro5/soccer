#include <iostream>
#include "include/Team.h"

Team::Team(unsigned int fthg,unsigned int ftag,unsigned int fthc,unsigned int ftac,unsigned int mp,unsigned int tw,unsigned int tp)
{

	fthg = ftag = fthc = ftac = mp = tw = tp = 0;
}

void Team::printPlayers(std::vector<std::string> players) const
{

	for (int i = 0;i < players.size();i++)
 	{

 	 std::cout << players[i] <<std::endl;

 	}

}

void Team::addPlayer(std::vector<std::string> players,std::string player_name)
{

players.push_back(player_name);

}

void Team::removePlayer(std::vector<std::string> players,std::string player_name)
{



}

unsigned int Team::getTotalPoints(unsigned int tw)
{
	total_wins = tw;
	total_points = tw * 3;

	return total_points;
}



