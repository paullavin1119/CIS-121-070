#include <iostream>
#include <string>
using namespace std; 

int main()
{
  // define variables
    double quantity;
    double price;
    double extendedPrice;
    double discountAmount;
    double discountedPrice;
    double totalDiscountedPrice = 0.0;

    // loop using keyboard input (Ctrl+Z triggers EOF to stop)
    cout << "Enter quantity and price (Ctrl+Z then Enter to stop): ";
    while (cin >> quantity >> price)
    {
        // process per entry
        extendedPrice = quantity * price;

        if (quantity > 1000)
        {
            discountAmount = extendedPrice * 0.10;
        }
        else
        {
            discountAmount = 0.0;
        }

        discountedPrice = extendedPrice - discountAmount;
        totalDiscountedPrice += discountedPrice;

        // output per entry
        cout << "\n--- Item Details ---" << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Discount Amount: $" << discountAmount << endl;
        cout << "Discount Price: $" << discountedPrice << endl;

        cout << "\nEnter quantity and price (Ctrl+Z then Enter to stop): ";
    }

    // final output after loop finishes
    cout << endl;
    cout << "Total of All Discounted Prices: $" << totalDiscountedPrice << endl;

    return 0;
}