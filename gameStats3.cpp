//Game Stats 3.0
//Demonstrates constants
#include <iostream>

using namespace std;

int main()
{
    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled*ALIEN_POINTS;
    cout<<"Score: "<<score<<endl;
    
    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE}; //enum default is 0,1,2,...,n
    difficulty myDifficulty = EASY;

    enum shipCost {FIGHTER_COST=25, BOMBER_COST, CRUISER_COST=50}; //Here, BOMBER_COST defaults to 1
    shipCost myShipCost=BOMBER_COST; 
    cout<<"\nTo upgrade my ship to a Cruiser will cost "<<(CRUISER_COST-myShipCost)<<" Resource points.\n";

    return 0;
}