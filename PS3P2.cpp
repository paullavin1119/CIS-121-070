#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
  double stockPrice;
  double quantity;
  double pertfolioValue;

  // input
  cout << "Enter current stock price: ";
  cin >> stockPrice;
  cout << "Enter quantity of stock: ";
  cin >> quantity;

  // process
  portfolioValue = stockPrice * quantity;

  // output
  cout << "Portfolio value: " << portfolioValue << endl;
  
    return 0;
}