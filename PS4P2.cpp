#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    string item;
    double quantity;
    double unitPrice;
    double extendedPrice;

    // input
    cout << "Enter item (A or B): ";
    cin >> item;
    cout << "Enter quantity: ";
    cin >> quantity;

    // process
    if (item == "A" || item == "a")
    {
        unitPrice = 10.00;
    }
    else
    {
        unitPrice = 20.00;
    }

    extendedPrice = quantity * unitPrice;

    // output
    cout << "Item: " << item << endl;
    cout << "Unit price: $" << unitPrice << endl;
    cout << "Extended price: $" << extendedPrice << endl;

    return 0;
}