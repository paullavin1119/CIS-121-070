#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

using namespace std;

double computeMPG(double miles, double gallons)
{
    return miles / gallons;
}

int main()
{
    string destinationCity;
    double milesTraveled;
    double gallonsUsed;
    double mpg = 0.0;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << "Enter destination city, miles traveled, and gallons used [ctrl+z then Enter to stop]" << endl;
    while (cin >> destinationCity >> milesTraveled >> gallonsUsed)
    {
        mpg = computeMPG(milesTraveled, gallonsUsed);
        
        totalMiles += milesTraveled;
        tripCount++;

        cout << fixed << setprecision(2);
        cout << "Destination: " << destinationCity << endl;
        cout << "Miles Per Gallon: " << mpg << endl;

        cout << "Enter destination city, miles traveled, and gallons used [ctrl+z then Enter to stop]" << endl;
    }

    cout << "Total Miles Traveled: " << totalMiles << endl;
    cout << "Total Number of Trips: " << tripCount << endl;

    return 0;
}