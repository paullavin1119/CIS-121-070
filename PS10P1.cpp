#include <iostream>
#include <iomanip>

using namespace std;

void computeOrder(int quantity, double price, double& total, double& tax, double& totalOrder)
{
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main()
{
    int quantity;
    double price;
    double total = 0.0;
    double tax = 0.0;
    double totalOrder = 0.0;
    
    double sumTotalOrder = 0.0;
    double sumTax = 0.0;

    cout << "Enter quantity and price [ctrl+z then enter to stop]" << endl;
    while (cin >> quantity >> price)
    {
        computeOrder(quantity, price, total, tax, totalOrder);
        
        sumTotalOrder += totalOrder;
        sumTax += tax;

        cout << fixed << setprecision(2);
        cout << "Total: $" << total << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total Order: $" << totalOrder << endl;

        cout << "Enter quantity and price [ctrl+z then enter to stop]" << endl;
    }

    cout << "Total of All Orders: $" << sumTotalOrder << endl;
    cout << "Tax for All Orders: $" << sumTax << endl;

    return 0;
}