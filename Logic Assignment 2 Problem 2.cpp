#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    string last_name;
    float hours;
    float pay_rate;
    float gross_pay;

    // input phase
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> pay_rate;

    // process phase
    gross_pay = hours * pay_rate;

    // output phase
    cout << "Last name: " << last_name << endl;
    cout << "Gross pay: " << gross_pay << endl;
    return 0;
}