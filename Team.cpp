#include <iostream>
#include <algorithm>
#include <string>
#include "include/Team.h"

Team::Team(unsigned int fthg,unsigned int ftag,unsigned int fthc,unsigned int ftac,unsigned int mp,unsigned int tw,unsigned int tp)

:points_per_win(3)

{

	fthg = ftag = fthc = ftac = mp = tw  = tp = 0;

	full_time_home_goals = fthg;
	full_time_away_goals = ftag;
	full_time_home_concede = fthc;
	full_time_away_concede = ftac;
	matches_played = mp;
	total_wins = tw;
	total_points = tp;

}


void Team::setName(std::string team_name)
{
	name = team_name;
}

void Team::setGoals(unsigned int fthg,unsigned int ftag,unsigned int fthc,unsigned int ftac)
{

full_time_home_goals = fthg;
full_time_away_goals = ftag;
full_time_home_concede = fthc;
full_time_away_concede = ftac;

}

void Team::setMatchesPlayed(unsigned int mp)
{

	matches_played = mp; //depends on type of division
}

void Team::setTotalWins(unsigned int tw)
{

	total_wins = tw; //depends on type of division
}

void Team::setTotalPoints(unsigned int tp)
{

   total_points = tp; //depends on type of division
}

void Team::addPlayer(std::vector<std::string>& players,std::string player_name)
{

players.push_back(player_name);

}

void Team::removePlayer(std::vector<std::string>& players,std::string player_name)
{

auto itr = std::find(players.begin(),players.end(),player_name);

if(itr != players.end())
	{
	players.erase(itr);
	}

}

std::string Team::getName() const
{
	return name;
}

unsigned int Team::getMatchesPlayed() const
{
	return matches_played;
}

unsigned int Team::getTotalWins() const
{
	return total_wins;
}


void Team::printGoals() const
{
 	std::cout << "Full Time Home Goals : " << full_time_home_goals <<std::endl;
 	std::cout << "Full Time Home Concede : " << full_time_home_concede <<std::endl;
 	std::cout << "Full Time Away Goals : " << full_time_away_goals <<std::endl;
 	std::cout << "Full Time Away Concede : " << full_time_away_concede <<std::endl;

}

unsigned int Team::getTotalPoints(unsigned int tw)
{
	total_wins = tw;
	total_points = tw * points_per_win;

	return total_points;
}

void Team::printTotalPoints()
{

	std::cout << "Total points are : " << getTotalPoints(total_wins) << std::endl;
}
void Team::printPlayers(std::vector<std::string> players) const
{

	for (size_t i = 0;i < players.size();i++)
 	{

 	 std::cout << players[i] <<std::endl;

 	}

}

