#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    double salary;
    double taxRate;
    double taxAmount;

    // input
    cout << "Enter annual salary: ";
    cin >> salary;

    // process
    if (salary > 100000)
    {
        taxRate = 0.40;
    }
    else if (salary >= 50000)
    {
        taxRate = 0.35;
    }
    else
    {
        taxRate = 0.25;
    }

    taxAmount = salary * taxRate;

    // output
    cout << "Salary: $" << salary << endl;
    cout << "Tax rate: " << (taxRate * 100) << "%" << endl;
    cout << "Tax amount: $" << taxAmount << endl;

    return 0;
}