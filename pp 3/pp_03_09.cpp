#include <iostream>

using namespace std;

int main()
{
    int mark;

    cout << "Enter obtained mark: ";
    cin >> mark;

    if (mark < 40){
        cout << "F";
    }
    else if (mark >= 40 && mark < 45){
        cout << "D";
    }
    else if (mark >= 45 && mark < 50){
        cout << "D+";
    }
    else if (mark >= 50 && mark < 55){
        cout << "C-";
    }
    else if (mark >= 55 && mark < 60){
        cout << "C";
    }
    else if (mark >= 60 && mark < 65){
        cout << "C+";
    }
    else if (mark >= 65 && mark < 70){
        cout << "B-";
    }
    else if (mark >= 70 && mark < 75){
        cout << "B";
    }
    else if (mark >= 75 && mark < 80){
        cout << "B+";
    }
    else if (mark >= 80 && mark < 85){
        cout << "A-";
    }
    else {
        cout << "A";
    }

    return 0;
}
