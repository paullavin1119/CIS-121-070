#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

double calculatePay(char jobCode, double hours)
{
    double rate = 0.0;
    double pay = 0.0;

    if (jobCode == 'L' || jobCode == 'l')
    {
        rate = 25.00;
    }
    else if (jobCode == 'A' || jobCode == 'a')
    {
        rate = 30.00;
    }
    else if (jobCode == 'J' || jobCode == 'j')
    {
        rate = 50.00;
    }

    if (hours > 40)
    {
        pay = (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    else
    {
        pay = hours * rate;
    }

    return pay;
}

int main()
{
    string lastName;
    char jobCode;
    double hoursWorked;
    double pay = 0.0;

    double totalPay = 0.0;
    int entryCount = 0;
    double averagePay = 0.0;

    cout << "Enter last name, job code (L, A, J), and hours worked [ctrl+z then Enter to stop]" << endl;
    while (cin >> lastName >> jobCode >> hoursWorked)
    {
        pay = calculatePay(jobCode, hoursWorked);

        totalPay += pay;
        entryCount++;

        cout << fixed << setprecision(2);
        cout << "Last Name: " << lastName << endl;
        cout << "Pay: $" << pay << endl;

        cout << "Enter last name, job code (L, A, J), and hours worked [ctrl+z then Enter to stop]" << endl;
    }

    if (entryCount > 0)
    {
        averagePay = totalPay / entryCount;
    }

    cout << "Average Pay: $" << averagePay << endl;
    cout << "Number of Entries: " << entryCount << endl;

    return 0;
}