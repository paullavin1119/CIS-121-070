#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    string equipmentCode;
    string dayCode;
    double rentalCost;

    // input
    cout << "Enter equipment code: ";
    cin >> equipmentCode;
    cout << "Enter day code (F for full day, H for half day): ";
    cin >> dayCode;

    // process
    if (equipmentCode == "A" || equipmentCode == "a")
    {
        if (dayCode == "F" || dayCode == "f")
        {
            rentalCost = 10.00;
        }
        else if (dayCode == "H" || dayCode == "h")
        {
            rentalCost = 15.00;
        }
        else
        {
            rentalCost = 50.00;
        }
    }
    else if (equipCode == "B" || equipCode == "b")
    {
        if (dayCode == "F" || dayCode == "f")
        {
            rentalCost = 20.00;
        }
        else if (dayCode == "H" || dayCode == "h")
        {
            rentalCost = 35.00;
        }
        else
        {
            rentalCost = 50.00;
        }
    }
    else if (equipCode == "C" || equipCode == "c")
    {
        if (dayCode == "H" || dayCode == "h")
        {
            rentalCost = 40.00;
        }
        else if (dayCode == "F" || dayCode == "f")
        {
            rentalCost = 45.00;
        }
        else
        {
            rentalCost = 50.00;
        }
    }
    else
    {
        rentalCost = 50.00;
    }

    // output
    cout << "Rental cost: $" << rentalCost << endl;

    return 0;
}