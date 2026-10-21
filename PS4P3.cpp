#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    double numberBooks;
    double costBooks;
    double orderTotal;
    double shippingCharge;

    // input
    cout << "Enter number of books to order: ";
    cin >> numberBooks;
    cout << "Enter cost per book: ";
    cin >> costPerBook;

    // process
    orderTotal = numberBooks * costBooks;

    if (orderTotal > 50.00)
    {
        shippingCharge = 0.00;
    }
    else
    {
        shippingCharge = 25.00;
    }

    // output
    cout << "Order total: $" << orderTotal << endl;
    cout << "Shipping charge: $" << shippingCharge << endl;

    return 0;
}