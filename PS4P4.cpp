#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
   string applianceName;
    double applianceCost;
    double warrantyCost;
    double totalCost;

    // input
    cout << "Enter appliance name: ";
    cin >> applianceName;
    cout << "Enter cost of appliance: ";
    cin >> applianceCost;

    // process
    if (applianceCost > 1000)
    {
        warrantyCost = applianceCost * 0.10;
    }
    else
    {
        warrantyCost = applianceCost * 0.05;
    }

    totalCost = applianceCost + warrantyCost;

    // output
    cout << "Appliance name: " << applianceName << endl;
    cout << "Appliance cost: $" << applianceCost << endl;
    cout << "Warranty cost: $" << warrantyCost << endl;
    cout << "Total: $" << totalCost << endl;

    return 0;
}