#include <iostream>
#include <string>
using namespace std; 

int main()
{
    // define variable
    string firstname;
    string lastname; 

    //input phase
    cout << "Enter  first name: ";
    cin >> firstname;
    cout << "Enter last name: ";
    cin >> lastname;

    // output phase
    cout << "Hello " << lastname << endl;
return 0;
}