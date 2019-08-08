//Lost Fortune
//Demonstrates a personalized choose your own adventure story
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    //Get information
    cout<<"Welcome to Lost Fortune\n\n";
    cout<<"Please enter the following for your personalized adventure\n";

    cout<<"Enter a number greater than 2: ";
    cin>>adventurers;

    cout<<"Enter a number, smaller than the first: ";
    cin>>killed;

    survivors = adventurers-killed;
    
    cout<<"Enter your last name: ";
    cin>>leader;

    //Tell the story
    cout<<"\nA brave group of "<<adventurers<<" adventure seekers set out on a quest ";
    cout<<"-- in search of the lost treasure of the Ancient Dwarves. ";
    cout<<"The group was led by the legendary rogue, Capitan 'One-Eye' "<<leader<<".\n";
    cout<<"\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout<<"All fought bravely under the command of Capitan 'One-Eye' "<<leader;
    cout<<", and the ogres were defeated, but at a cost...\n";
    cout<<"Of the adventurers, "<<killed<<" were vanquished, ";
    cout<<"leaving just "<<survivors<<" in the group.\n";

    cout<<"\nThe party was about to give up all hope. ";
    cout<<"But while laying the deceased to rest, ";
    cout<<"they stumbled upon the buried fortune. ";
    cout<<"So the adventurers split "<<GOLD_PIECES<<" gold pieces. ";
    cout<<leader<<" held on to the extra "<<(GOLD_PIECES%survivors);
    cout<<" pieces to keep things fair of course.\n\n\n";

    return 0;
}