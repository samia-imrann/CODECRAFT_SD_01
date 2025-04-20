#include <iostream>
using namespace std;

void fromCelsius(double temp);
void fromFahrenheit(double temp);
void fromKelvin(double temp);

int main() 
{
    int choice;
    double temp;
    char unit;
    do
    {
        cout << "Enter temperature's value: ";
        cin >> temp;

        cout << "Enter it's unit.\n";
        cout << "C for Celsius.\nF for Fahrenheit.\nK for Kelvin.\n";
        cout << "Enter your choice: ";
        cin >> unit;

        if (unit == 'C' || unit == 'c')
        {
            fromCelsius(temp);
        }
        else if (unit == 'F' || unit == 'f')
        {
            fromFahrenheit(temp);
        }
        else if (unit == 'K' || unit == 'k')
        {
            fromKelvin(temp);
        }
        else {
            cout << "Invalid unit! Please use C, F, or K." << endl;
        }

        cout << "Enter 1 if you want to convert more temperatures to other units: ";
        cin >> choice;

    } while (choice == 1);

    return 0;
}

void fromCelsius(double temp) 
{
    double fahrenheit = (temp * 9 / 5) + 32;
    double kelvin = temp + 273.15;
    cout << "Celsius: " << temp << " C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;
}

void fromFahrenheit(double temp) 
{
    double celsius = (temp - 32) * 5 / 9;
    double kelvin = celsius + 273.15;
    cout << "Fahrenheit: " << temp << " F" << endl;
    cout << "Celsius: " << celsius << " C" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;
}

void fromKelvin(double temp) 
{
    double celsius = temp - 273.15;
    double fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Kelvin: " << temp << " K" << endl;
    cout << "Celsius: " << celsius << " C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " F" << endl;
}
