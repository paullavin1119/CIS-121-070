#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main()
{
 // define variables
    string destinationCity;
    double milesTravelled;
    double gallons;
    double mpg;
    double totalMiles = 0.0;
    int tripsMade = 0;

    // loop using keyboard input (Ctrl+Z triggers EOF to stop)
    cout << "Enter destination city, miles travelled, and gallons used (Ctrl+Z then Enter to stop): ";
    while (cin >> destinationCity >> milesTravelled >> gallons)
    {
        // process per entry
        mpg = milesTravelled / gallons;
        totalMiles += milesTravelled;
        tripsMade++;

        // output per entry
        cout << fixed << setprecision(2);
        cout << "\n--- Trip Details ---" << endl;
        cout << "Destination City: " << destinationCity << endl;
        cout << "Miles Per Gallon: " << mpg << " mpg" << endl;

        cout << "\nEnter destination city, miles travelled, and gallons used (Ctrl+Z then Enter to stop): ";
    }

    // final output after loop finishes
    cout << endl;
    cout << "Total Miles Travelled: " << totalMiles << endl;
    cout << "Total Trips Made: " << tripsMade << endl;

    return 0;
}