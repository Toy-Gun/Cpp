#include<iostream>
using namespace std;

int main()
{
    double m, h;
    cin >> m >> h;
    double bmi = m / h / h;
    if (bmi < 18.5)
    {
        cout << "Underweight";
    }
    else if (bmi < 24.0)
    {
        cout << "Normal";
    }
    else
    {
        cout << bmi << endl << "Overweight";
    }
}