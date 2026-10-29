#include <iostream>
#include <iomanip>

using namespace std;

void computeWidgetOrder(int numberOfWidgets, double& costPerWidget, double& extendedPrice, double& salesTax, double& totalOrder)
{
    if (numberOfWidgets >= 10000)
    {
        costPerWidget = 4.00;
    }
    else if (numberOfWidgets >= 5000)
    {
        costPerWidget = 5.00;
    }
    else
    {
        costPerWidget = 10.00;
    }
    
    extendedPrice = numberOfWidgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    int numberOfWidgets;
    double costPerWidget = 0.0;
    double extendedPrice = 0.0;
    double salesTax = 0.0;
    double totalOrder = 0.0;
    double sumTotalOrders = 0.0;

    cout << "Enter number of widgets [ctrl+z then enter to stop]" << endl;
    while (cin >> numberOfWidgets)
    {
        computeWidgetOrder(numberOfWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);
        
        sumTotalOrders += totalOrder;

        cout << fixed << setprecision(2);
        cout << "Number of Widgets: " << numberOfWidgets << endl;
        cout << "Cost Per Widget: $" << costPerWidget << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total Order: $" << totalOrder << endl;

        cout << "Enter number of widgets [ctrl+z then enter to stop]" << endl;
    }

    cout << "Sum of all total orders: $" << sumTotalOrders << endl;

    return 0;
}