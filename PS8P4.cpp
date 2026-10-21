#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

double getUnitPrice(char code)
{
    if (code == 'W' || code == 'w') return 10.00;
    if (code == 'C' || code == 'c') return 15.00;
    if (code == 'G' || code == 'g') return 20.00;
    return 0.0;
}

double getShipping(char code)
{
    if (code == 'W' || code == 'w') return 2.00;
    if (code == 'C' || code == 'c') return 5.00;
    if (code == 'G' || code == 'g') return 7.00;
    return 0.0;
}

int main()
{
    char productCode;
    int quantity;
    double unitPrice = 0.0;
    double shipping = 0.0;
    double extendedPrice = 0.0;
    double orderTotal = 0.0;
    double sumTotal = 0.0;

    cout << "Enter product code (W, C, G) and quantity [ctrl+z then Enter to stop]" << endl;
    while (cin >> productCode >> quantity)
    {
        unitPrice = getUnitPrice(productCode);
        shipping = getShipping(productCode);
        
        extendedPrice = quantity * unitPrice;
        orderTotal = extendedPrice + shipping;
        sumTotal += orderTotal;

        cout << fixed << setprecision(2);
        cout << "Product Code: " << productCode << endl;
        cout << "Unit Price: $" << unitPrice << endl;
        cout << "Shipping: $" << shipping << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Order Total: $" << orderTotal << endl;

        cout << "Enter product code (W, C, G) and quantity [ctrl+z then Enter to stop]" << endl;
    }

    cout << "Total of All Entries: $" << sumTotal << endl;

    return 0;
}