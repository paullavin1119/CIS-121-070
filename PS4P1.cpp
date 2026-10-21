#include <iostream>
#include <string>
using namespace std; 

int main()
{
    double quantity;
    double unitPrice;
    double extendedPrice;
    double tax;
    double total;

    // input
    cout << "Enter quantity: ";
    cin >> quantity;

    // process
    if (quantity >= 1000)
    {
        unitPrice = 3.00;
    }
    else
    {
        unitPrice = 5.00;
    }

    extendedPrice = quantity * unitPrice;
    tax = extendedPrice * 0.07;
    total = extendedPrice + tax;

    // output
    cout << "Quantity: " << quantity << endl;
    cout << "Unit price: $" << unitPrice << endl;
    cout << "Extended price: $" << extendedPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}