#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    string lastname;
    float score;

    // input phase
    cout << "Enter last name: ";
    cin >> lastname;
    cout << "Enter score: ";
    cin >> score;

    // output phase
    cout << lastname << " has a score of " << score << endl;
    return 0;
}