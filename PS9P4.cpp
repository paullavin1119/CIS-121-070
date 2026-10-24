#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

double getPayRate(char jobCode)
{
    if (jobCode == 'L' || jobCode == 'l') return 25.00;
    if (jobCode == 'A' || jobCode == 'a') return 30.00;
    if (jobCode == 'J' || jobCode == 'j') return 50.00;
    return 0.0;
}

double getGrossPay(double hoursWorked, double payRate)
{
    if (hoursWorked > 40)
    {
        return (40 * payRate) + ((hoursWorked - 40) * payRate * 1.5);
    }
    return hoursWorked * payRate;
}

int main()
{
    string lastName;
    char jobCode;
    double hoursWorked;
    double payRate = 0.0;
    double grossPay = 0.0;
    
    double totalGrossPay = 0.0;

    cout << "enter last name, job code (L, A, J), and hours worked [ctrl+z then enter to stop]" << endl;
    while (cin >> lastName >> jobCode >> hoursWorked)
    {
        payRate = getPayRate(jobCode);
        grossPay = getGrossPay(hoursWorked, payRate);
        
        totalGrossPay += grossPay;

        cout << fixed << setprecision(2);
        cout << "Last Name: " << lastName << endl;
        cout << "Gross Pay: $" << grossPay << endl;

        cout << "enter last name, job code (L, A, J), and hours worked [ctrl+z then enter to stop]" << endl;
    }

    cout << "total of all gross pay: $" << totalGrossPay << endl;

    return 0;
}