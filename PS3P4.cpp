#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    double purchasePrice;
    double currentPrice;
    double percentChange;

    //input
    cout << "Enter purchase price: ";
    cin >> purchasePrice;
    cout << "Enter current price: ";
    cin >> currentPrice;

    // process
    percentChange = ((currentPrice - purchasePrice) / purchasePrice) * 100;

    // output
    cout << "Percent change: " << percentChange << "%" << endl;

    return 0;
}