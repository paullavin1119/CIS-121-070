#include <iostream>
#include <iomanip>

using namespace std; 

double computeTotal(int quantity, double price)
{
    return quantity * price;
}

double computeDiscountTotal(double total)
{
    double discountAmount = 0.0;
    
    if (total > 10000.00)
    {
        discountAmount = total * 0.10;
    }
    else
    {
        discountAmount = total * 0.05;
    }
    
    return total - discountAmount;
}

int main()
{
    int quantity;
    double price;
    double total = 0.0;
    double discountTotal = 0.0;

    double sumTotal = 0.0;
    double sumDiscountTotal = 0.0;

    cout << "enter quantity and price [ctrl+z then enter to stop]" << endl;
    while (cin >> quantity >> price)
    {
        total = computeTotal(quantity, price);
        discountTotal = computeDiscountTotal(total);

        sumTotal += total;
        sumDiscountTotal += discountTotal;

        cout << fixed << setprecision(2);
        cout << "total: $" << total << endl;
        cout << "discount total: $" << discountTotal << endl;

        cout << "enter quantity and price [ctrl+z then enter to stop]" << endl;
    }

    cout << "sum of all totals: $" << sumTotal << endl;
    cout << "sum of all discount totals: $" << sumDiscountTotal << endl;

    return 0;
}