#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    float length;
    float width;
    float area;
    float circumference;

    // input phase
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // process phase
    area = length * width;
    circumference = 2 * length + 2 * width;

    // output phase
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    return 0;
}