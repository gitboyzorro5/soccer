#include <iostream>
#include <vector>
#include "include/Team.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //Team ManUnited(0,0,0,0,0,0//ManUnited.printGoals();
    std::vector<Team> eplteams;
    Team Arsenal,Manunited,Mancity;
    eplteams.push_back(Arsenal);
    eplteams.push_back(Manunited);
    eplteams.push_back(Mancity);
    Arsenal.setName("Arsenal");
    Mancity.setName("Manchester City");
    Manunited.setName("Manchester United");
    Arsenal.setGoals(10,450,5,2);
    Mancity.setGoals(5,800,9,60);
    Manunited.setGoals(12,80,34,40);

    Arsenal.printGoals();
    cout << std::endl;
    Mancity.printGoals();
    cout << std::endl;
    Manunited.printGoals();


    return 0;
}
