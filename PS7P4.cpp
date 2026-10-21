#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main()
{
    // define variables
    string lastName;
    string jobCode;
    double hoursWorked;
    double rate = 0.0;
    double pay;
    double totalPay = 0.0;
    int employeeCount = 0;
    double averagePay = 0.0;

    // loop using keyboard input (Ctrl+Z triggers EOF to stop)
    cout << "Enter employee last name, job code (L, A, J), and hours worked (Ctrl+Z then Enter to stop): ";
    while (cin >> lastName >> jobCode >> hoursWorked)
    {
        // determine rate based on the job code
        if (jobCode == "L" || jobCode == "l")
        {
            rate = 25.00;
        }
        else if (jobCode == "A" || jobCode == "a")
        {
            rate = 30.00;
        }
        else if (jobCode == "J" || jobCode == "j")
        {
            rate = 50.00;
        }
        else
        {
            rate = 0.0;
        }

        // compute pay with overtime (time and a half / 40 hours)
        if (hoursWorked > 40)
        {
            pay = (40 * rate) + ((hoursWorked - 40) * rate * 1.5);
        }
        else
        {
            pay = hoursWorked * rate;
        }

        totalPay += pay;
        employeeCount++;

        // output per employee
        cout << fixed << setprecision(2);
        cout << "\n--- Employee Details ---" << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Job Code: " << jobCode << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Pay: $" << pay << endl;

        cout << "\nEnter employee last name, job code, and hours worked (Ctrl+Z then Enter to stop): ";
    }

    // summary calculations and output
    if (employeeCount > 0)
    {
        averagePay = totalPay / employeeCount;
    }

    cout << endl;
    cout << "Total Entries Made: " << employeeCount << endl;
    cout << "Average Pay: $" << averagePay << endl;

    return 0;
}