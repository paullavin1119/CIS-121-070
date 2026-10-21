#include <iostream>
#include <string>
using namespace std; 

int main()
{
   // define variable
    string lastName;
    double score;
    string letterGrade;

    // input
    cout << "Enter student last name: ";
    cin >> lastName;
    cout << "Enter score: ";
    cin >> score;

    // process
    if (score >= 90)
    {
        letterGrade = "A";
    }
    else if (score >= 80)
    {
        letterGrade = "B";
    }
    else if (score >= 70)
    {
        letterGrade = "C";
    }
    else if (score >= 60)
    {
        letterGrade = "D";
    }
    else
    {
        letterGrade = "F";
    }

    // output
    cout << "Student: " << lastName << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    return 0;
}