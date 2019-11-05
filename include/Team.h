#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
class Team
{

public:
	Team();
	void print_players(std::vector<std::string>);
	void add_player(std::vector<std::string>,std::string);


private:
	std::string name;
	int matches_played;
	int full_time_home_goals;
	int full_time_away_goals;
	int full_time_home_concede;
	int full_time_away_concede;
	std::vector<std::string> players;

};

#endif // TEAM_H
