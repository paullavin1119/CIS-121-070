#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
float rnum_1, rnum_2
float sum, product, difference;

// input phase
cout << "Enter first real number: ";
cin >> rnum_1;
cout << "Enter second real number: ";
cin >> rnum_2;

// process phase
sum = rnum_1 + rnum_2;
product = rnum_1 * rnum_2;
difference = rnum_1 - rnum_2;

// output phase
cout << "Sum: " << sum << endl;
cout << "Product: " << product << endl;
cout << "Difference: " << difference << endl;
return 0;
}