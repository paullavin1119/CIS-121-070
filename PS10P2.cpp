#include <iostream>
#include <iomanip>

using namespace std;

void computeCharges(double weight, int zipCode, double& postage, double& areaCharge, double& weightCharge)
{
    if (zipCode == 60171)
    {
        areaCharge = 2.00;
    }
    else if (zipCode == 60172)
    {
        areaCharge = 2.50;
    }
    else if (zipCode == 60635)
    {
        areaCharge = 3.00;
    }
    else
    {
        areaCharge = 5.00;
    }

    double weightChargePerOunce = 0.0;
    if (weight > 100)
    {
        weightChargePerOunce = 0.02;
    }
    else if (weight > 50)
    {
        weightChargePerOunce = 0.03;
    }
    else
    {
        weightChargePerOunce = 0.05;
    }

    weightCharge = weight * weightChargePerOunce;
    postage = areaCharge + weightCharge;
}

int main()
{
    double weight;
    int zipCode;
    double postage = 0.0;
    double areaCharge = 0.0;
    double weightCharge = 0.0;
    
    int entryCount = 0;

    cout << "Enter package weight and zip code [ctrl+z then enter to stop]" << endl;
    while (cin >> weight >> zipCode)
    {
        computeCharges(weight, zipCode, postage, areaCharge, weightCharge);
        
        entryCount++;

        cout << fixed << setprecision(2);
        cout << "Area Charge: $" << areaCharge << endl;
        cout << "Weight Charge: $" << weightCharge << endl;
        cout << "Postage: $" << postage << endl;

        cout << "Enter package weight and zip code [ctrl+z then enter to stop]" << endl;
    }

    cout << "Number of Entries Made: " << entryCount << endl;

    return 0;
}