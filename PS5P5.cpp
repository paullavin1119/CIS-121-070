#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    double weight;
    double rate;
    double total;

    // input
    cout << "Enter weight: ";
    cin >> weight;

    // process
    if (weight > 100)
    {
        rate = 0.50;
    }
    else if (weight >= 30)
    {
        rate = 0.25;
    }
    else if (weight >= 20)
    {
        rate = 0.20;
    }
    else
    {
        rate = 0.10;
    }

    total = weight * rate;

    // output
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate per pound: $" << rate << endl;
    cout << "Total: $" << total << endl;

    return 0;
}