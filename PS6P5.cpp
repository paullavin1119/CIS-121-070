#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    string jobCode;
    double hours;
    double rate;
    double grossSalary;

    // input
    cout << "Enter job code (L, J, or A): ";
    cin >> jobCode;
    cout << "Enter hours: ";
    cin >> hours;

    // process
    if (jobCode == "L" || jobCode == "l")
    {
        if (hours > 40)
        {
            rate = 50.00;
        }
        else
        {
            rate = 40.00;
        }
    }
    else if (jobCode == "J" || jobCode == "j")
    {
        if (hours > 60)
        {
            rate = 100.00;
        }
        else
        {
            rate = 75.00;
        }
    }
    else if (jobCode == "A" || jobCode == "a")
    {
        if (hours > 40)
        {
            rate = 25.00;
        }
        else
        {
            rate = 20.00;
        }
    }

    grossSalary = hours * rate;

    // output
    cout << "Gross salary: $" << grossSalary << endl;

    return 0;
}