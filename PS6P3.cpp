#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    double numberOfTickets;
    string locationCode;
    double pricePerTicket;
    double totalCost;

    // input
    cout << "Enter number of concert tickets: ";
    cin >> numberOfTickets;
    cout << "Enter location code (H or L): ";
    cin >> locationCode;

    // process
    if (numberOfTickets > 25 || locationCode == "H" || locationCode == "h")
    {
        pricePerTicket = 30.00;
    }
    else if (numberOfTickets >= 10 || locationCode == "L" || locationCode == "l")
    {
        pricePerTicket = 40.00;
    }
    else
    {
        pricePerTicket = 50.00;
    }

    totalCost = numberOfTickets * pricePerTicket;

    // output
    cout << "Number of tickets: " << numberOfTickets << endl;
    cout << "Price per ticket: $" << pricePerTicket << endl;
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}