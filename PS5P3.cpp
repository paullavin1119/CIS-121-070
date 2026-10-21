#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    string lastName;
    double hours;
    string jobCode;
    double payRate;
    double totalPay;

    // input
    cout << "Enter employee last name: ";
    cin >> lastName;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter job code (E, J, or A): ";
    cin >> jobCode;

    // process
    if (jobCode == "E" || jobCode == "e")
    {
        payRate = 25.00;
    }
    else if (jobCode == "J" || jobCode == "j")
    {
        payRate = 20.00;
    }
    else if (jobCode == "A" || jobCode == "a")
    {
        payRate = 15.00;
    }

    totalPay = hours * payRate;

    // output
    cout << "Employee last name: " << lastName << endl;
    cout << "Hours worked: " << hours << endl;
    cout << "Pay rate: $" << payRate << endl;
    cout << "Total pay: $" << totalPay << endl;

    return 0;
}