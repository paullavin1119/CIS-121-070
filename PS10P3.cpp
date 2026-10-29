#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void computeFinancials(double creditHours, double financialAid, double& tuition, double& tuitionOwed)
{
    tuition = creditHours * 250.00;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    string lastName;
    double creditHours;
    double financialAid;
    double tuition = 0.0;
    double tuitionOwed = 0.0;
    
    double totalTuitionOwedAll = 0.0;
    int studentCount = 0;
    double averageOwed = 0.0;

    cout << "Enter last name, credit hours, and financial aid [ctrl+z then enter to stop]" << endl;
    while (cin >> lastName >> creditHours >> financialAid)
    {
        computeFinancials(creditHours, financialAid, tuition, tuitionOwed);
        
        totalTuitionOwedAll += tuitionOwed;
        studentCount++;

        cout << fixed << setprecision(2);
        cout << "Last Name: " << lastName << endl;
        cout << "Tuition: $" << tuition << endl;
        cout << "Tuition Owed: $" << tuitionOwed << endl;

        cout << "Enter last name, credit hours, and financial aid [ctrl+z then enter to stop]" << endl;
    }

    if (studentCount > 0)
    {
        averageOwed = totalTuitionOwedAll / studentCount;
    }

    cout << "Total Tuition Owed: $" << totalTuitionOwedAll << endl;
    cout << "Total Number of Entries: " << studentCount << endl;
    cout << "Average Amount Owed: $" << averageOwed << endl;

    return 0;
}