#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    double mealTotal;
    double tip;
    double total;

    // input
    cout << "Enter meal total: ";
    cin >> mealTotal;

    // process
    tip = mealTotal * 0.15;
    total = mealTotal + tip;

    // output
    cout << "Meal total: " << mealTotal << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total: " << total << endl;

    return 0;
}