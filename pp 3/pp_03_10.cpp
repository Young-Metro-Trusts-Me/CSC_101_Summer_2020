#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age < 3){
        cout << "Infancy";
    }
    else if (age >= 3 && age < 12){
        cout << "Childhood";
    }
    else if (age >= 12  && age < 20){
        cout << "Adolescence";
    }
    else if (age >= 20  && age < 40){
        cout << "Young adulthood";
    }
    else if (age >= 40  && age < 65){
        cout << "Mature adulthood";
    }
    else {
        cout << "Late adulthood";
    }

    return 0;
}
