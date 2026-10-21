#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

double computeTuition(double credits)
{
    return credits * 250.00;
}

int main()
{
    string lastName;
    double creditsTaken;
    double tuitionOwed = 0.0;
    
    double sumTuition = 0.0;
    int studentCount = 0;

    cout << "Enter student last name and credits taken [ctrl+z then Enter to stop]" << endl;
    while (cin >> lastName >> creditsTaken)
    {
        tuitionOwed = computeTuition(creditsTaken);
        
        sumTuition += tuitionOwed;
        studentCount++;

        cout << fixed << setprecision(2);
        cout << "Last Name: " << lastName << endl;
        cout << "Credits Taken: " << creditsTaken << endl;
        cout << "Tuition Owed: $" << tuitionOwed << endl;

        cout << "Enter student last name and credits taken [ctrl+z then Enter to stop]" << endl;
    }

    cout << "Total Tuition Sum: $" << sumTuition << endl;
    cout << "Total Number of Students: " << studentCount << endl;

    return 0;
}