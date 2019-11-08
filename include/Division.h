#ifndef DIVISION_H
#define DIVISION_H
#include <string>

class Division
{

public:
	Division(std::string,std::string,std::string,unsigned int,unsigned int);
	void setName(std::string);
	void setCountry(std::string);
	void setSymbol(std::string);


private:
	std::string name;
	std::string country;
	std::string symbol;
	unsigned int no_of_matches;
	unsigned int no_of_teams;

};


#endif // DIVISION_H
