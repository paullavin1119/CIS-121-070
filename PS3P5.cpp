#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    double fixedCosts;
    double pricePerUnit;
    double costPerUnit;
    double breakEvenPoint;

    // input
    cout << "Enter fixed costs: ";
    cin >> fixedCosts;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;
    cout << "Enter cost per unit: ";
    cin >> costPerUnit;

    // process
    breakEvenPoint = fixedCosts / (pricePerUnit - costPerUnit);

    // output
    cout << "Break-even point: " << breakEvenPoint << endl;

    return 0;
}