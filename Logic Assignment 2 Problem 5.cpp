#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    float price;
    float discount_percent;
    float discount_amount;
    float discounted_price;

    // input phase
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter discount percent (in decimal form): ";
    cin >> discount_percent;

    // process phase
    discount_amount = price * discount_percent;
    discounted_price = price - discount_amount;

    // output phase
    cout << "Discount amount: " << discount_amount << endl;
    cout << "Discounted price: " << discounted_price << endl;
    return 0;
}