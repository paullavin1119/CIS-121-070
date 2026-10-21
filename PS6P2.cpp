#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    double partNumber;
    double quantity;
    double costPerUnit;
    double totalCost;

    // input
    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> partNumber;
    cout << "Enter quantity: ";
    cin >> quantity;

    // process
    if (partNumber == 10)
    {
        if (quantity > 1000)
        {
            costPerUnit = 1.00;
        }
        else
        {
            costPerUnit = 5.00;
        }
    }
    else if (partNumber == 99)
    {
        if (quantity > 500)
        {
            costPerUnit = 2.00;
        }
        else
        {
            costPerUnit = 5.00;
        }
    }
    else
    {
        costPerUnit = 5.00;
    }

    totalCost = quantity * costPerUnit;

    // output
    cout << "Part number: " << partNumber << endl;
    cout << "Cost per unit: $" << costPerUnit << endl;
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}