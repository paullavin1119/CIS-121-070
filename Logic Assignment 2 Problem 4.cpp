#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    string last_name;
    float credits_taken;
    float total_tuition;

    // input phase
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter credits taken: ";
    cin >> credits_taken;

    // process phase
    total_tuition = (credits_taken * 250) + 100;

    // output phase
    cout << "Last name: " << last_name << endl;
    cout << "Total tuition: " << total_tuition << endl;
    return 0;
}