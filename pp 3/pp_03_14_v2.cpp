#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number (1-10): ";
    cin >> x;

    switch(x){
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        case 10:
            cout << "Ten";
            break;
        default:
            cout << "Please enter a number between 1-10 and run again";
    }
    return 0;
}
