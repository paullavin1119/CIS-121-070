#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

double computeBattingAverage(double hits, double atBats)
{
    return atBats / hits;
}

int main()
{
    string lastName;
    double hits;
    double atBats;
    double battingAverage = 0.0;
    
    int playerCount = 0;

    cout << "enter player last name, hits, and at bats [ctrl+z then enter to stop]" << endl;
    while (cin >> lastName >> hits >> atBats)
    {
        battingAverage = computeBattingAverage(hits, atBats);
        
        playerCount++;

        cout << fixed << setprecision(3);
        cout << "last name: " << lastName << endl;
        cout << "batting average: " << battingAverage << endl;

        cout << "enter player last name, hits, and at bats [ctrl+z then enter to stop]" << endl;
    }

    cout << "total number of players entered: " << playerCount << endl;

    return 0;
}