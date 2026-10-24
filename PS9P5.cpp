#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double getCostPerCredit(char districtCode)
{
    if (districtCode == 'I' || districtCode == 'i')
    {
        return 250.00;
    }
    else if (districtCode == 'O' || districtCode == 'o')
    {
        return 550.00;
    }
    return 0.0;
}

double computeTuitionCost(double creditHours, double costPerCredit)
{
    return creditHours * costPerCredit;
}

int main()
{
    string lastName;
    double creditHours;
    char districtCode;
    double costPerCredit = 0.0;
    double tuitionCost = 0.0;
    
    double totalTuition = 0.0;

    cout << "enter student last name, credit hours, and district code (I or O) [ctrl+z then enter to stop]" << endl;
    while (cin >> lastName >> creditHours >> districtCode)
    {
        costPerCredit = getCostPerCredit(districtCode);
        tuitionCost = computeTuitionCost(creditHours, costPerCredit);
        
        totalTuition += tuitionCost;

        cout << fixed << setprecision(2);
        cout << "last name: " << lastName << endl;
        cout << "tuition cost: $" << tuitionCost << endl;

        cout << "enter student last name, credit hours, and district code (I or O) [ctrl+z then enter to stop]" << endl;
    }

    cout << "total of all tuition costs: $" << totalTuition << endl;

    return 0;
}