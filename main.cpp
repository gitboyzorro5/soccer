#include <iostream>
#include <vector>
#include "include/Team.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    Team ManUnited(0,0,0,0,0,0,0);
    //ManUnited.printGoals();
    std::vector<std::string> ManUnitedPlayers;
    ManUnited.addPlayer(ManUnitedPlayers,"David Degea");
    ManUnited.addPlayer(ManUnitedPlayers,"Luke Shaw");
    ManUnited.addPlayer(ManUnitedPlayers,"Victor Lindeloff");
    ManUnited.addPlayer(ManUnitedPlayers,"Harry Mcguire");

    ManUnited.setGoals(10,5,5,12);
    ManUnited.printGoals();
    ManUnited.setTotalWins(5);
    ManUnited.printTotalPoints()
;
    return 0;
}
