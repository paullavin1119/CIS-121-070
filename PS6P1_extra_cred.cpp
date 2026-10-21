#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    double quantity;
    char status;
    double price;
    double extendedPrice;
    double taxAmount;
    double total;

    // input
    cout << "Enter quantity of widgets: ";
    cin >> quantity;
    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;

    // process
    if (quantity < 5000)
    {
        price = 30.00;
    }
    else
    {
        switch (toupper(status))
        {
            case 'A':
                price = 10.00;
                break;
            case 'B':
                price = 12.00;
                break;
            case 'C':
                price = 20.00;
                break;
            case 'D':
                price = 22.00;
                break;
            default:
                price = 30.00;
                break;
        }
    }

    extendedPrice = quantity * price;
    taxAmount = extendedPrice * 0.07;
    total = extendedPrice + taxAmount;

    // output
    cout << "Extended price: $" << extendedPrice << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Total: $" << total << endl;

    return 0;
}