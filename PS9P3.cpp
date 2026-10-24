#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

double computeMPG(double miles, double gallons)
{
    return miles / gallons;
}

double computeGasCost(double gallons)
{
    return gallons * 3.50;
}

int main()
{
    string destinationCity;
    double milesTraveled;
    double gallonsUsed;
    double mpg = 0.0;
    double gasCost = 0.0;
    
    double totalGasCost = 0.0;

    cout << "enter destination city, miles traveled, and gallons used [ctrl+z then enter to stop]" << endl;
    while (cin >> destinationCity >> milesTraveled >> gallonsUsed)
    {
        mpg = computeMPG(milesTraveled, gallonsUsed);
        gasCost = computeGasCost(gallonsUsed);
        
        totalGasCost += gasCost;

        cout << fixed << setprecision(2);
        cout << "destination city: " << destinationCity << endl;
        cout << "miles per gallon: " << mpg << endl;
        cout << "cost of gas: $" << gasCost << endl;

        cout << "enter destination city, miles traveled, and gallons used [ctrl+z then enter to stop]" << endl;
    }

    cout << "total cost of gas: $" << totalGasCost << endl;

    return 0;
}