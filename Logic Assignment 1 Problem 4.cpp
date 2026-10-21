#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
int int_1, int_2, int_3;
int result;

    // input phase
    cout << "Enter first integer: ";
    cin >> int_1;
    cout << "Enter second integer: ";
    cin >> int_2;
    cout << "Enter third integer: ";
    cin >> int_3;

    // process phase
    result = (int_1 + int_2) * int_3;

    // output phase
    cout << "Result: " << result << endl;
    return 0;
}