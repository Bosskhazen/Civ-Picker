#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    unsigned int opus = 0;
    do {
        cout << "Enter the episode of Civilization you want to play (a number between 1 and 6) : ";
        cin >> opus;
        cout << endl;
    } while ((opus < 1) or (opus > 6));

    // Picking the civ according to the opus choosen by the player
    switch (opus) {
        case (1) :
            break;
        case (2) :
            break;
        case (3) :
            break;
        case (4) :
            break;
        case (5) :
            break;
        case (6) :
            //Opening and testing the opening of the civ list file
            ifstream ist {"civ6_list.txt"};
            if(!ist) cout << "ERROR : can't open file";

            //storing the list in a vector
            vector<string> leaders;
            string line;
            while(getline(ist, line)){
                leaders.push_back(line);
            }

            //picking a random leader
            int numberOfChoice = leaders.size();
            int leader = (rand() % (numberOfChoice - 1 + 1)) + 1;

            cout << "Picked leader : " << leaders[leader-1];
            cout << endl;


            break;
    }

    system("pause");

    return 0;
}
