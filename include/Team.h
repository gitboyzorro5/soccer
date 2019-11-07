#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
class Team
{

public:
	Team(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
	void setName(std::string);
	void setGoals(unsigned int,unsigned int,unsigned int,unsigned int);
	void setMatchesPlayed(unsigned int);
	void setTotalWins(unsigned int);
	void setTotalPoints(unsigned int);
	std::string getName();
	unsigned int getMatchesPlayed();
	unsigned int getTotalWins();
    unsigned int getTotalPoints(unsigned int);
    void printGoals();
	void printPlayers(std::vector<std::string>) const;
	void addPlayer(std::vector<std::string>&,std::string);
	void removePlayer(std::vector<std::string>&,std::string);
	void printTotalPoints();

private:
	std::string name;
	unsigned int matches_played;
	unsigned int full_time_home_goals;
	unsigned int full_time_away_goals;
	unsigned int full_time_home_concede;
	unsigned int full_time_away_concede;
	unsigned int total_wins;
	unsigned int total_points;
	std::vector<std::string> players;
	

};

#endif // TEAM_H
