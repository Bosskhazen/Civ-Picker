#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

    unsigned int opusChoice(); // Choosing the right Civ game
    void listVectoring(vector<string>&, ifstream const);
    int randomPicking();

int main()
{
    srand(time(NULL));

    unsigned int opus = opusChoice();
    vector<string> leaders;


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
            listVectoring(leaders, ist);


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



unsigned int opusChoice(){
    unsigned int opus;
    do {
        cout << "Enter the episode of Civilization you want to play (a number between 1 and 6) : ";
        cin >> opus;
        cout << endl;
    } while ((opus < 1) or (opus > 6));
    return opus;
}

void listVectoring(vector<string>& l, ifstream const i){
    string line;
    while(getline(i, line)){
        l.push_back(line);
    }

}

