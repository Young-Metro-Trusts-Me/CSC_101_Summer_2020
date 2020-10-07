#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number (0-10): ";
    cin >> x;

    if (x == 0){
        cout << "Zero";
    }
    else if (x == 1){
        cout << "One";
    }
    else if (x == 1){
        cout << "One";
    }
    else if (x == 2){
        cout << "Two";
    }
    else if (x == 3){
        cout << "Three";
    }
    else if (x == 4){
        cout << "Four";
    }
    else if (x == 5){
        cout << "Five";
    }
    else if (x == 6){
        cout << "Six";
    }
    else if (x == 7){
        cout << "Seven";
    }
    else if (x == 9){
        cout << "Eight";
    }
    else if (x == 10){
        cout << "Ten";
    }
    else {
        cout << "Please enter a number within (0-10) and try again.";
    }

    return 0;
}
