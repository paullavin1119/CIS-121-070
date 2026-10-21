#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    double pounds;
    double pricePerPound;
    double total;

    // input
    cout << "Enter quantity in pounds: ";
    cin >> pounds;

    // process
    if (pounds > 100)
    {
        pricePerPound = 0.10;
    }
    else if (pounds >= 50)
    {
        pricePerPound = 0.25;
    }
    else
    {
        pricePerPound = 0.50;
    }

    total = pounds * pricePerPound;

    // output
    cout << "Price per pound: $" << pricePerPound << endl;
    cout << "Total: $" << total << endl;

    return 0;
}