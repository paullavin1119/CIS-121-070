#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    float quantity;
    float unit_price;
    float extended_price;

    // input phase
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unit_price;

    // process phase
    extended_price = quantity * unit_price;

    // output phase
    cout << "Extended price: " << extended_price << endl;
    return 0;
}