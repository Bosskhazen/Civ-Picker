#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

unsigned int opusChoice(); // Choosing the right Civ game
int randomPicking(vector<string> const&); //picking a random leader
void result (vector<string> const&, int const&); // announcing the results

int main()
{
    srand(time(NULL));

    unsigned int opus = opusChoice();
    vector<string> leaders;


    // Picking the civ according to the opus choosen by the player
    switch (opus) {
        case (1) : {
            //Opening and testing the opening of the civ list file
            ifstream ist {"civ1_list.txt"};
            if(!ist) cout << "ERROR : can't open file";
            //storing the file in a vector
            string line;
            while(getline(ist, line)){
                leaders.push_back(line);
            }
            result(leaders, randomPicking(leaders));
            } break;
        case (2) : {
            //Opening and testing the opening of the civ list file
            ifstream ist {"civ2_list.txt"};
            if(!ist) cout << "ERROR : can't open file";
            //storing the file in a vector
            string line;
            while(getline(ist, line)){
                leaders.push_back(line);
            }
            result(leaders, randomPicking(leaders));
            } break;
        case (3) :
            break;
        case (4) :
            break;
        case (5) :
            break;
        case (6) : {
            //Opening and testing the opening of the civ list file
            ifstream ist {"civ6_list.txt"};
            if(!ist) cout << "ERROR : can't open file";
            //storing the file in a vector
            string line;
            while(getline(ist, line)){
                leaders.push_back(line);
            }
            result(leaders, randomPicking(leaders));
            } break;
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

int randomPicking (vector<string> const& l){
    int numberOfChoice = l.size();
    int leader = (rand() % (numberOfChoice - 1 + 1)) + 1;
    return leader;
}

void result (vector<string> const& l, int const& r){
    cout<< "Picked leader : " << l[r-1];
    cout<< endl;

}



