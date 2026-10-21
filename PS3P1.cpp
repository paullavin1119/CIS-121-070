#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    double exam1;
    double exam2;
    double totalScore;

    // input 
    cout << "Enter first exam score: ";
    cin >> exam1;
    cout << "Enter second exam score: ";
    cin >> exam2;

    // process
    totalScore = exam1 *0.60 +exam2 *0.40;

    // output
    cout << "Total score: " << totalScore << endl;
    return 0;
}