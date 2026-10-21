#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    float realnumber_1, realnumber_2;
    float sum; 

    // input phase
    cout << "Enter first real number: ";
    cin >> realnumber_1;
    cout << "Enter second real number: ";
    cin >> realnumber_2;

    // process phase
    sum = realnumber_1 + realnumber_2;

    // output phase
    cout << "Sum: " << sum << endl;
   
    return 0;
}
