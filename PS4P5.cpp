#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    string lastName;
    double dependents;
    double grossIncome;
    double adjustedGrossIncome;
    double taxRate;
    double incomeTax;

    // input
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter number of dependents: ";
    cin >> dependents;
    cout << "Enter gross income: ";
    cin >> grossIncome;

    // process
    adjustedGrossIncome = grossIncome - (dependents * 12000.0);

    if (adjustedGrossIncome > 50000)
    {
        taxRate = 0.20;
    }
    else
    {
        taxRate = 0.10;
    }

    incomeTax = adjustedGrossIncome * taxRate;

    if (incomeTax < 0)
    {
        incomeTax = 100.00;
    }

    // output
    cout << "Last name: " << lastName << endl;
    cout << "Gross income: $" << grossIncome << endl;
    cout << "Number of dependents: " << dependents << endl;
    cout << "Adjusted gross income: $" << adjustedGrossIncome << endl;
    cout << "Income tax: $" << incomeTax << endl;

    return 0;
}