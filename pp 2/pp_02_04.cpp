#include <iostream>

using namespace std;

int main()
{
    float meter, feet;

    cout << "Enter the height (meter): ";
    cin >> meter;

    feet = ((meter * 100) / 2.54) / 12 ;

    cout << "The height is: " << feet << " feet" << endl;

    return 0;

}
