#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celcius, kelvin;

    cout << "Enter the temperature (Fahrenheit): ";
    cin >> fahrenheit;

    celcius = ((fahrenheit - 32) * 5) / 9;
    kelvin = celcius + 273.15;

    cout << "The temperature is " << celcius << " Celcius" << endl;
    cout << "The temperature is " << kelvin << " Kelvin" << endl;

    return 0;
}
