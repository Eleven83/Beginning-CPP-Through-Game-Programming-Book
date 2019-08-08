//Expensive Calculator
//Demonstrates built-in arithmetic operators
#include <iostream>

using namespace std;

int main()
{
    cout<<"7+3 = "<< 7+3 <<endl; // 10
    cout<<"7-3 = "<< 7-3 <<endl; // 4
    cout<<"7*3 = "<< 7*3 <<endl; // 21

    cout<<"7/3 = "<< 7/3 <<endl; // 2
    cout<<"7.0/3.0 = "<< 7.0/3.0 <<endl; // 2.3333

    cout<<"7%3 = "<< 7%3 <<endl; // 1 (The remainder of 7/3)

    cout<<"7+3*5 = "<< 7+3*5<<endl; // 22
    cout<<"(7+3)*5 = "<< (7+3)*5 <<endl; // 50

    return 0;
}