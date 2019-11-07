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
    ManUnited.printPlayers(ManUnitedPlayers);

    ManUnited.removePlayer(ManUnitedPlayers,"Luke Shaw");
    ManUnited.printPlayers(ManUnitedPlayers);
    return 0;
}
