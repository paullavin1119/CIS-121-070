#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

double getLabFee(string dept, int code)
{
    if (dept == "CIS" && code == 101) return 50.00;
    if (dept == "CIS" && code == 121) return 100.00;
    if (dept == "MAT" && code == 111) return 25.00;
    if (dept == "MAT" && code == 112) return 35.00;
    if (dept == "ENG" && code == 100) return 55.00;
    return 50.00;
}

int main()
{
    string department;
    int courseCode;
    double labFee = 0.0;
    
    double totalLabFees = 0.0;
    int courseCount = 0;
    double averageLabFee = 0.0;

    cout << "Enter department and course code [ctrl+z then Enter to stop]" << endl;
    while (cin >> department >> courseCode)
    {
        labFee = getLabFee(department, courseCode);
        
        totalLabFees += labFee;
        courseCount++;

        cout << fixed << setprecision(2);
        cout << "Department: " << department << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Lab Fee: $" << labFee << endl;

        cout << "Enter department and course code [ctrl+z then Enter to stop]" << endl;
    }

    if (courseCount > 0)
    {
        averageLabFee = totalLabFees / courseCount;
    }

    cout << "Total Lab Fees to Collect: $" << totalLabFees << endl;
    cout << "Average Lab Fee: $" << averageLabFee << endl;

    return 0;
}