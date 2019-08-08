//Game Stats 2.0
//Demonstrates Arithmetic operations with variables
#include <iostream>

using namespace std;

int main()
{
    unsigned int score = 5000;
    cout<<"Score: "<<score<<endl;
    
    //altering the value of a variable
    score = score + 100;
    cout<<"Score: "<<score<<endl;

    //increment operators
    int lives = 3;
    ++lives;
    cout<<"Lives: "<<lives<<endl;

    lives = 3;
    lives++;
    cout<<"Lives: "<<lives<<endl;

    lives = 3;
    int bonus = ++lives*10;
    cout<<"Lives, bonus= "<<lives<<", "<<bonus<<endl;

    lives = 3;
    bonus = lives++*10;
    cout<<"Lives, bonus= "<<lives<<", "<<endl;

    //integer wrap around
    score = 4294967295;
    cout<<"\nScore: "<<score<<endl;
    ++score;
    cout<<"Score: "<<score<<endl;

    return 0;
}