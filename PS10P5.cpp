#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void computeAmounts(double amount, double rate5, double rate10, double& fiveYearAmount, double& tenYearAmount)
{
    fiveYearAmount = amount * pow(1 + rate5, 5);
    tenYearAmount = amount * pow(1 + rate10, 10);
}

int main()
{
    double amount;
    double rate5;
    double rate10;
    double fiveYearAmount = 0.0;
    double tenYearAmount = 0.0;

    cout << "Enter investment amount, 5-year rate, and 10-year rate [ctrl+z then enter to stop]" << endl;
    while (cin >> amount >> rate5 >> rate10)
    {
        computeAmounts(amount, rate5, rate10, fiveYearAmount, tenYearAmount);
        
        cout << fixed << setprecision(2);
        cout << "Investment Amount: $" << amount << endl;
        cout << "Five Year Amount: $" << fiveYearAmount << endl;
        cout << "Ten Year Amount: $" << tenYearAmount << endl;

        cout << "Enter investment amount, 5-year rate, and 10-year rate [ctrl+z then enter to stop]" << endl;
    }

    return 0;
}