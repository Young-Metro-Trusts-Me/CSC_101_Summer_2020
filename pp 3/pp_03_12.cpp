#include <iostream>

using namespace std;

int main()
{
    float x, y, z;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter third number: ";
    cin >> z;

    if (x > y){
        if(x > z){
            if (y >z){
                cout << "Largest: " << x << endl;
                cout << "Smallest: " << z << endl;
            }
            else{
                cout << "Largest: " << x << endl;
                cout << "Smallest: " << y << endl;
            }
        }
        else {
            cout << "Largest: " << z << endl;
            cout << "Smallest: " << y << endl;
        }
    }
    else {
        if (y > z){
            if (x > z){
                cout << "Largest: " << y << endl;
                cout << "Smallest: " << z << endl;
            }
            else {
                cout << "Largest: " << y << endl;
                cout << "Smallest: " << x << endl;
            }
        }
        else {
            cout << "Largest: " << z << endl;
            cout << "Smallest: " << x << endl;
        }
    }

    return 0;
}
